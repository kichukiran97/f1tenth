import numpy as np
import cv2
import glob
from camera_pkg.camera_publisher import CameraPublisher

class ChessboardCalibration:
    def __init__(self, image_dir, nx, ny, image_shape=(640, 480), debug=False):
        fnames = glob.glob(f'{image_dir}*.jpg')
        print("frames = ", fnames, " image dir = ", image_dir)

        objpoints = []
        imgpoints = []
        
        objp = np.zeros((nx*ny, 3), np.float32)
        objp[:,:2] = np.mgrid[0:nx, 0:ny].T.reshape(-1, 2)

        good_files = []

        for f in fnames:
            gray = cv2.imread(f, cv2.IMREAD_GRAYSCALE)
            ret, corners = cv2.findChessboardCorners(gray, (nx, ny), flags=cv2.CALIB_CB_NORMALIZE_IMAGE + cv2.CALIB_CB_ADAPTIVE_THRESH)
            if ret:
                imgpoints.append(corners)
                objpoints.append(objp)
                good_files.append(f)
            else:
                print(f'Chessboard corners not found in {f}')

        print(f"Summary of calibration: {len(good_files)}/{len(fnames)} images are good.\nGood images are: {good_files}")

        ret, self.camera_matrix, self.dist_coeffs, self.rvecs, self.tvecs = cv2.calibrateCamera(objpoints, imgpoints, image_shape[::-1], None, None)

        self.calibration_size = image_shape
        if ret:
            print("Camera calibration was successful!")
            print(f"Camera Matrix: \n{self.camera_matrix}")
            print(f"Distortion Coefficients: \n{self.dist_coeffs}")
            pass
        else:
            print("Camera calibration failed.")


    def undistort(self, img):
        h, w = img.shape[:2]
        # new_camera_matrix, roi = cv2.getOptimalNewCameraMatrix(self.camera_matrix, self.dist_coeffs, (w, h), 1, (w, h))
        undistorted_img = cv2.undistort(img, self.camera_matrix, self.dist_coeffs, None, None)

        return undistorted_img