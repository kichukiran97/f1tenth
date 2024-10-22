import cv2
import numpy as np

class BirdsEyeTransform:
    def __init__(self, *, calibration_size = (640, 480), output_size = (160, 120)):
        self.calibration_size = calibration_size
        self.output_size = output_size
        self.lane_following_config_file = "configuration/lane_following_config.txt"

        self.camera_matrix = np.array([
            [308.62389761,  0.,           312.01580612],
            [0.,            409.79787494, 232.10785047],
            [0.,            0.,           1.]
        ])
        self.dist_coeffs = np.array([
            [-3.61126216e-01, 1.80684037e-01, -1.80532313e-04, 2.63530384e-04, -5.35540317e-02]
        ])

    def read_values(self, config_file):
        with open(config_file, "r") as f:
            line1 = f.readline().strip()
            block_size = int(line1.split()[0])
            line2 = f.readline().strip()
            c_value = int(line2.split()[0])
            line3 = f.readline().strip()
            kernel = int(line3.split()[0])
            # print(f"BLOCK SIZE: {block_size}    C_VALUE: {c_value} \n\n\n")
        return block_size, c_value, kernel

    def exit(self):
        pass

    def forward(self, img):
        try:
            self.calibrated = img
            print(f"ORIGINAL SHAPE {self.calibrated.shape}")
            self.calibrated, new_size = self.undistort(self.calibrated)
            print(f"IMG SHAPE {self.calibrated.shape} \n\n")
            undistorted = self.calibrated.copy()
            self.calibrated = self.threshold(self.calibrated)
            self.calibrated = self.transform(self.calibrated, new_size)
            return self.calibrated, undistorted
        except Exception as e:
            print(e)
            return None, None
        
    def threshold(self, img):
        block_size, c_value, kernel = self.read_values(self.lane_following_config_file)
        # self.block_size = 7
        # self.c_value = -10
        img_output = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
        img_output = cv2.GaussianBlur(img_output, (kernel,kernel), 0) # Change the kernel size based on the img resolution, for 160x120 (3, 3) is good

        img_output = cv2.adaptiveThreshold(img_output, 255, cv2.ADAPTIVE_THRESH_GAUSSIAN_C, cv2.THRESH_BINARY, block_size, c_value)

        # img_output = cv2.threshold(img_output, 100, 255, cv2.THRESH_BINARY)[1]

        img_output = cv2.cvtColor(img_output, cv2.COLOR_GRAY2BGR)
        return img_output

    def undistort(self, img):
        h, w = img.shape[:2]
        new_camera_matrix, roi = cv2.getOptimalNewCameraMatrix(self.camera_matrix, self.dist_coeffs, self.calibration_size, 1, self.output_size)
        undistorted_img = cv2.undistort(img, self.camera_matrix, self.dist_coeffs, None, new_camera_matrix)
        x, y, w, h = roi
        undistorted_img = undistorted_img[y:y+h, x:x+w]
        self.real_output_shape = (w, h, 3)
        return undistorted_img, (w, h)

    def transform(self, img, input_size):
        w1, h1 = input_size
        w2, h2 = input_size

        dst = np.float32(
            [(0, 0),
            (0, h1),
            (w1, h1),
            (w1, 0)]
        )
        # src = np.float32(
        #     [(w2 * 0.3, h2 * 0.2),
        #     (w2 * -0.5 * (0.3/0.2), h2 * 0.8),
        #     (w2 * (1.0 + 0.5 * (0.3/0.2)), h2 * 0.8),
        #     (w2 * 0.7, h2 * 0.2)]
        # )


        # Updated 6.5.
        # src = np.float32([(w2 * 0.28, h2 * 0.315),     # top-left
        #                     (w2 * -0.1, h2 * 0.75),     # bottom-left
        #                     (w2 * (1+0.1), h2 * 0.75),    # bottom-right
        #                     (w2 * (1-0.28), h2 * 0.315)])    # top-right

        # Updated 7.5., this is a bit larger view
        # src = np.float32([(w2 * 0.25, h2 * 0.28),     # top-left
        #                     (w2 * -0.25, h2 * 0.75),     # bottom-left
        #                     (w2 * (1+0.25), h2 * 0.75),    # bottom-right
        #                     (w2 * (1-0.25), h2 * 0.28)])    # top-right
        
        src = np.float32(
            [(w2 * 0.22, h2 * 0.22),
            (w2 * -0.6, h2 * 0.8),
            (w2 * (1.0 + 0.6), h2 * 0.8),
            (w2 * (1-0.22), h2 * 0.22)]
        )


        M = cv2.getPerspectiveTransform(src, dst)
        # M_inv = cv2.getPerspectiveTransform(dst, src)

        return cv2.warpPerspective(img, M, input_size, flags=cv2.INTER_LINEAR)
