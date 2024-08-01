import cv2
import numpy as np
from dataclasses import dataclass
from typing import Tuple, List

class LaneThresholding:
    def threshold(self, img):
        block_size = 7
        c_value = -10
        gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

        img_thres = cv2.adaptiveThreshold(gray, 255, cv2.ADAPTIVE_THRESH_GAUSSIAN_C, cv2.THRESH_BINARY, block_size, c_value)

        blur = cv2.GaussianBlur(img_thres, (3,3), 0)
        img_output = cv2.threshold(blur, 100, 255, cv2.THRESH_BINARY)[1]

        return img_output
