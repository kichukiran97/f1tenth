import cv2
import numpy as np
import numpy.polynomial.polynomial as poly
from scipy.signal import find_peaks

DRAW_LANELINES = True

class FindLaneLines:
    def __init__(self):
        self.left_lane = None
        self.right_lane = None
        self.frames_since_last_left = 0
        self.frames_since_last_right = 0

        self.coefs_left = None
        self.coefs_right = None
        self.coefs_mid = None

        self.x = 0
        self.dx = 0
        self.y = -1
        
        self.lane_width_in_pixels = 36

    def forward(self, img, look_ahead_distance_pixels):
        img_original = img.copy()
        # img = self.remove_car(img)
        img, confidence = self.find_lane_lines(img)
        img = self.find_curve(img)
        self.calculate_position(look_ahead_distance_pixels) 
        if self.x:
            img[120-int(look_ahead_distance_pixels)-1:120-int(look_ahead_distance_pixels)+1, int(self.x)-1:int(self.x)+1, :] = (0, 255, 255)
        print(f"X IN IMAGE SPACE: {self.x:.2f}")
        self.dx = 80 - self.x
        print(f"X IN CAR COORDINATES: {self.dx:.2f}")

        if self.y != -1:
            line_start = poly.polyval(119-self.y, self.coefs_left, 1)
            line_end = poly.polyval(119-self.y, self.coefs_right, 1)
            img, angle = self.get_intersection_line_angle(img_original, img, int(line_start), int(line_end))          
        return self.dx, self.y, img, confidence, angle

    def get_intersection_line_angle(self, img_orig, img, line_start, line_end):
        line_start += 5
        line_end -= 5
        # img[:, int(line_start), :] = (0, 0, 255)        
        # img[:, int(line_end), :] = (0, 0, 255)
        img_roi = img_orig[119-self.y-10:119-self.y+10, line_start:line_end]
        
        pixel_indices = np.where(img_roi > 100)
    
        _, slope = poly.polyfit(pixel_indices[1], pixel_indices[0], 1)
        
        line_x = np.arange(-40, 40, 1)
        line_y = np.array([119 + int(slope * x) - self.y for x in line_x])
        line_x += 80

        for i, x in enumerate(line_x):
            img[line_y[i], x, :] = (0, 0, 255)

        angle = np.arctan(slope)
        print("ANGLE", angle)

        return img, angle
    
    def calculate_position(self, look_ahead_distance_pixels):
        if self.coefs_mid.any() and len(self.coefs_mid) > 0:
            self.x = poly.polyval(120-look_ahead_distance_pixels, self.coefs_mid)
        else:
            self.x = None

    def remove_car(self, img):
        mask = np.ones_like(img) * 255

        center_x = 80  
        center_y = 138
        radius = 24

        cv2.circle(mask, (center_x, center_y), radius, (0), -1)
        masked_image = cv2.bitwise_and(img, img, mask=mask)
        return masked_image
    
    def offset_curve(self, y, offset_distance, coefs, deriv_coefs):
        x = poly.polyval(y, coefs).astype(np.int32)
        slope = poly.polyval(y, deriv_coefs)
        normal_line = -1 / slope
        angle = np.arctan2(normal_line, 1)
        if normal_line < 0:
            angle += np.pi
        offset_x = x + np.sin(angle) * offset_distance
        offset_y = y + np.cos(angle) * offset_distance        
        return int(offset_x), int(offset_y)

    def find_curve(self, img):
        left_laneline = self.left_lane
        right_laneline = self.right_lane
        
        img_height = 120
        img_width = 160

        # lane_img = np.zeros((img_height, img_width, 4), dtype=np.uint8)

        # Fitting a second order polynomial to the left line if we have detected it and has a lenght longer than 6
        if left_laneline and len(left_laneline[0]) > 6:
            self.coefs_left = poly.polyfit(left_laneline[1], left_laneline[0], 2)
            self.deriv_left = poly.polyder(self.coefs_left)
            # if DRAW_LANELINES:
            # ffit_left = poly.polyval(np.arange(left_laneline[1][-1], left_laneline[1][0]), self.coefs_left).astype(np.int32)
            #     for i in range(len(ffit_left)):
            #         index = left_laneline[1][-1] + i
            #         lane_img[index, ffit_left[i]:ffit_left[i]+self.lane_width_in_pixels, :] = (255, 0, 0, 100)
        else:
            print("LEFT LANE NOT FITTED")

        # Fitting a second order polynomial to the right line if we have detected it and has a lenght longer than 6
        if right_laneline and len(right_laneline[0]) > 6:
            self.coefs_right = poly.polyfit(right_laneline[1], right_laneline[0], 2)
            self.deriv_right = poly.polyder(self.coefs_right)
            # if DRAW_LANELINES:
            # ffit_right = poly.polyval(np.arange(right_laneline[1][-1], right_laneline[1][0]), self.coefs_right).astype(np.int32)
            #     for i in range(len(ffit_right)):
            #         index = right_laneline[1][-1] + i
            #         lane_img[index, ffit_right[i]-self.lane_width_in_pixels:ffit_right[i], :] = (255, 0, 0, 100)
        else:
            print("RIGHT LANE NOT FITTED")

        mid_line_left = [[], []]
        mid_line_right = [[], []]

        if left_laneline and len(left_laneline[0]) > 20:
            for i in range(left_laneline[1][-1], 119):
                offset_x, offset_y = self.offset_curve(i, self.lane_width_in_pixels/2, self.coefs_left, self.deriv_left)
                if offset_x < 160 and offset_x > 0 and offset_y < 120 and offset_y > 0:
                    mid_line_left[0].append(offset_x)
                    mid_line_left[1].append(offset_y)
                    

        if right_laneline and len(right_laneline[0]) > 20:
            for i in range(right_laneline[1][-1], 119)[::-1]:
                offset_x, offset_y = self.offset_curve(i, -self.lane_width_in_pixels/2, self.coefs_right, self.deriv_right)
                if offset_x < 160 and offset_x > 0 and offset_y < 120 and offset_y > 0:
                    mid_line_right[0].append(offset_x)
                    mid_line_right[1].append(offset_y)
                    

        mid_line = [[], []]

        # Fitting a middle lane based on both of the lines or just one of them
        if len(mid_line_left[0]) > 0 and len(mid_line_right[0]) > 0:
            mid_line[0] = np.concatenate((np.array(mid_line_left[0]), np.array(mid_line_right[0])))
            mid_line[1] = np.concatenate((mid_line_left[1], mid_line_right[1]))
        elif len(mid_line_left[0]) > 0:
            mid_line = mid_line_left
        elif len(mid_line_right[0]) > 0:
            mid_line = mid_line_right

        if len(mid_line[0]) > 6:
            self.coefs_mid = poly.polyfit(mid_line[1], mid_line[0], 2)
            ffit = poly.polyval(np.arange(np.min(mid_line[1]), np.max(mid_line[1])), self.coefs_mid).astype(np.int32)
            if DRAW_LANELINES:
                for i in range(len(ffit)):
                    index = min(mid_line[1]) + i
                    img[index, ffit[i]-1:ffit[i]+1, :] = (0, 0, 200)
        else:
            print("MID LINE NOT FITTED")

        return img

           
    def find_lane_lines(self, img):
        img_height = img.shape[0]
        img_width = img.shape[1]
        left_laneline = ([], [])
        right_laneline = ([], [])

        last_i_left = img_height
        last_i_right = img_height
        self.y = -1

        # Scan the image row by row beginning from the last row
        for i in range(img_height)[::-1]:
            left_lane_px = None
            right_lane_px = None

            # Finding the "peaks" from the row, meaning the white areas
            col_sums = np.sum(img[i:i+1, :], axis=0)
            peaks = find_peaks(col_sums, height=0)[0]

        
            # Same for the right side of the image...    
            if len(right_laneline[0]) == 0:
                right_peaks = peaks[peaks > img_width * (1 - 0.45)]
            else:
                right_peaks = peaks


            # Same thing for right lane line.......
            if not self.right_lane:
                if len(right_laneline[0]) == 0 and len(right_peaks) > 0:
                    right_laneline[0].append(right_peaks[0])
                    right_laneline[1].append(i)
                elif len(right_peaks) > 0:
                    distances = np.abs(right_peaks - right_laneline[0][-1])
                    if np.min(distances) < 3 and last_i_right - i < 10:
                        index = np.argmin(distances)
                        right_laneline[0].append(right_peaks[index])
                        right_laneline[1].append(i)
                        last_i_right = i

            elif len(right_peaks) != 0:
                prev_frame = poly.polyval(i, self.coefs_right)
                if len(right_laneline[0]) > 0:
                    distances = np.abs(right_peaks - right_laneline[0][-1]) + np.abs(right_peaks - prev_frame)
                else: 
                    distances = np.abs(right_peaks - prev_frame)
                
                if np.min(distances) < 6 and last_i_right - i < 30:
                    index = np.argmin(distances)
                    right_lane_px = right_peaks[index]
                    right_laneline[0].append(right_lane_px)
                    right_laneline[1].append(i)
                last_i_right = i



            # If no left lane detected until this point, we assume left line is in the left half of the peaks, otherwise we are interested in all of the peaks
            if right_laneline != None and len(right_laneline[0]) > 0:
                left_peaks = [peak for peak in peaks if peak > right_laneline[0][-1]-self.lane_width_in_pixels*(1+0.3) and peak<right_laneline[0][-1]-self.lane_width_in_pixels*(1-0.3)]
            elif len(left_laneline[0]) == 0:
                left_peaks = np.flip(peaks[peaks < img_width * 0.45])
            else:
                left_peaks = peaks

                
            # If self.left_lane == None, we know we have not found left lane from the previous camera frame
            if not self.left_lane:
                # If we have not yet found left lane line from this frame, but there are peaks detected on current row of the image
                if len(left_laneline[0]) == 0 and len(left_peaks) > 0:
                    left_laneline[0].append(left_peaks[0])
                    left_laneline[1].append(i)
                # If we have already found parts of the left lane in this frame, we add the peak that is closest to the line on previous row
                elif len(left_peaks) > 0:
                    distances = np.abs(left_peaks - left_laneline[0][-1])
                    # If the smallest distance is less than six pixels and we have not jumped over 20 frames without detecting left lane in this frame
                    if np.min(distances) < 3 and last_i_left - i < 10:
                        index = np.argmin(distances)
                        left_laneline[0].append(left_peaks[index])
                        left_laneline[1].append(i)
                        last_i_left = i

            # If we have found left lane from previous frame, we want to find the closest peak to the row below but also minimise the distance between the detected
            # lane line from previous frame, at the same height (since we assume high enough fps so that the lanes have not moved much betweem two frames)
            elif len(left_peaks) != 0:
                # Finding the pixel from the left lane line detected in the previous frame
                prev_frame = poly.polyval(i, self.coefs_left)
                # If we have found left lane from this frame, we minimize the distance compared to that and also to the previous frame...
                if len(left_laneline[0]) > 0:
                    distances = np.abs(left_peaks - left_laneline[0][-1]) + np.abs(left_peaks - prev_frame)
                # ...else we minimize compared to the previous frame only
                else: 
                    distances = np.abs(left_peaks - prev_frame)
                # If the smallest distance is less than 10 pixels and we have not jumped over 60 frames without detecting left lane in this frame
                if np.min(distances) < 6 and last_i_left - i < 30:
                    index = np.argmin(distances)
                    left_lane_px = left_peaks[index]
                    left_laneline[0].append(left_lane_px)
                    left_laneline[1].append(i)
                last_i_left = i




            if left_lane_px and right_lane_px and self.y == -1:
                col_sums = np.concatenate(([0], np.sum(img[i-5:i, left_lane_px:right_lane_px], axis=0), [0]))
                peaks = find_peaks(col_sums, width=10)[0]
                if len(peaks) > 0:
                    self.y = 119 - i + 5

        # If we detected only less than 10 pixels of the left lane line, we discard it and increase the count of frames when left line has not been detected 
        if len(left_laneline[0]) > 10:
            self.left_lane = left_laneline
            self.frames_since_last_left = 0
        else: 
            self.frames_since_last_left += 1
            # If over three frames without detecting left line, we set self.left_lane = None
            if self.frames_since_last_left > 3:
                self.left_lane = None
                self.frames_since_last_left = 0

        # Same for right line...
        if len(right_laneline[0]) > 10:
            self.right_lane = right_laneline
            self.frames_since_last_right = 0
        else: 
            self.frames_since_last_right += 1
            if self.frames_since_last_right > 3:
                self.right_lane = None
                self.frames_since_last_right = 0    

        # Calculating the confidence based on the amount of pixels we found for each lane line
        if self.left_lane and self.right_lane:
            confidence = (len(self.left_lane[0]) + len(self.right_lane[0])) / 240
        elif self.left_lane:
            confidence = len(self.left_lane[0]) / 240
        elif self.right_lane:
            confidence = len(self.right_lane[0]) / 240
        else: 
            confidence = 0


        img = cv2.cvtColor(img, cv2.COLOR_GRAY2BGR)

        # Drawing both of the detected lines to the image
        for i in range(len(left_laneline[0])):
            img[left_laneline[1][i], left_laneline[0][i]-1:left_laneline[0][i]+1, :] = (255, 0, 0)
        for i in range(len(right_laneline[0])):
            img[right_laneline[1][i], right_laneline[0][i]-1:right_laneline[0][i]+1, :] = (0, 255, 0)

        return img, confidence
