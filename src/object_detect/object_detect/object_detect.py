import rclpy
from rclpy.node import Node
from sensor_msgs.msg import CompressedImage
import os
os.environ['LD_PRELOAD'] = '/usr/lib/aarch64-linux-gnu/libgomp.so.1'
from internal_interface.msg import Object, Objects
import yaml
import cv2
import numpy as np
import torch
import yaml
import platform
import time

VISUALISE = True
PREPROCESS = True

# Green and red color ranges in HSV
lower_green = np.array([40, 0, 100])
upper_green = np.array([80, 255, 255])
lower_red = np.array([160, 0, 100])
upper_red = np.array([180, 255, 255])

# # Disable visualization on ARM platforms (e.g., Jetson Xavier NX)
# if platform.machine() == 'aarch64':
#     VISUALISE = False

class ObjectDetection(Node):
    def __init__(self):
        super().__init__('object_detection')
        
        # ROS2 subscription to the camera topic
        self.subscription = self.create_subscription(
            CompressedImage,
            '/image/left/image_compressed',
            self.image_callback,
            10)
        self.subscription

        # Load the YOLOv5 model
        self.model = torch.hub.load('yolov5', 'custom', path='models/best_May15.pt', source='local', force_reload=True)
        self.model.conf = 0.6
        self.model.iou = 0.7
        self.model.multi_label = True
        self.model.max_det = 10

        # Load class labels from a YAML file
        labels_file = "models/data.yaml"
        try:
            with open(labels_file) as f:
                data = yaml.load(f, Loader=yaml.FullLoader)
            self.labels = data['names']
        except:
            self.labels = ['Car', 'Crossing', 'HighwayE', 'HighwayX', 'No_Entry', 'Parking', 'Person_DOLL', 
                           'Priority', 'Stop', 'Traffic_Red', 'onewayroad', 'roundabout', 'trafficlight']

        # ROS2 publisher for detection results
        self.publisher = self.create_publisher(Objects, "detection/objects", 10)

    def preprocess(self, frame):
        # Apply masking to the frame (optional preprocessing step)
        mask = 255 * np.ones_like(frame)
        mask = cv2.copyMakeBorder(mask, 70, 0, 0, 0, cv2.BORDER_CONSTANT, value=(0,0,0))
        mask = cv2.copyMakeBorder(mask, 0, 0, 50, 0, cv2.BORDER_CONSTANT, value=(0,0,0))
        mask = cv2.copyMakeBorder(mask, 0, 0, 0, 50, cv2.BORDER_CONSTANT, value=(0,0,0))
        mask = cv2.resize(mask, (640, 480))
        frame = cv2.bitwise_and(frame, mask)
        return frame

    def image_callback(self, msg):
        start_time = time.time()

        # Convert ROS2 CompressedImage message to OpenCV image
        np_arr = np.frombuffer(msg.data, np.uint8)
        frame = cv2.imdecode(np_arr, cv2.IMREAD_COLOR)

        if PREPROCESS:
            frame = self.preprocess(frame)
        
        frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        detections = self.detect(frame)
        msg = Objects()

        for detection in detections.xyxy[0]:
            obj = Object()
            x1, y1, x2, y2, confidence, class_id = detection
            label = self.labels[int(class_id)]

            obj.x1 = float(x1)
            obj.y1 = float(y1)
            obj.x2 = float(x2)
            obj.y2 = float(y2)
            obj.label = str(label)

            try:
                if VISUALISE:
                    # Draw bounding box and label on the image
                    cv2.rectangle(frame, (int(x1), int(y1)), (int(x2), int(y2)), (0, 0, 255), 2)
                    cv2.putText(frame, label, (int(x1), int(y1)), cv2.FONT_HERSHEY_SIMPLEX, 1, (0, 0, 255), 2)
                    cv2.imshow("frame", frame)
                    if cv2.waitKey(1) == ord('q'):
                        exit(0)
            except Exception as e:
                print(e)
                print('Object detection visualization failed')

            # Special handling for traffic light detection
            if class_id == 12:
                print('traffic light detected')

                try:
                    crop = frame[int(y1):int(y2), int(x1):int(x2)]
                    gamma = 1.2
                    crop = np.array(255 * (crop / 255) ** gamma, dtype='uint8')
                    hsv = cv2.cvtColor(crop, cv2.COLOR_BGR2HSV)

                    top = hsv[:int(hsv.shape[0] / 2)]
                    bottom = hsv[int(hsv.shape[0] / 2):]

                    mask_green = cv2.inRange(bottom, lower_green, upper_green)
                    res_green = cv2.bitwise_and(bottom, bottom, mask=mask_green)

                    mask_red = cv2.inRange(top, lower_red, upper_red)
                    res_red = cv2.bitwise_and(top, top, mask=mask_red)

                    red_nonzero = len(mask_red.nonzero()[0])
                    green_nonzero = len(mask_green.nonzero()[0])

                    if red_nonzero > 10 * green_nonzero:
                        print('red')
                        obj.label = 'TrafficRed'

                    if green_nonzero > 10 * red_nonzero:
                        print('green')
                        obj.label = 'TrafficGreen'

                except Exception as error:
                    print(error)
                    obj.label = 'trafficlight'

            processing_time = time.time() - start_time
            print(f"Detected {label} ({int(class_id)}) with confidence {confidence:.2f} in {processing_time:.2f} seconds.")
            if processing_time > 0.5:
                print(f"WARNING: Processing time is {processing_time:.2f} seconds.")
            msg.objects.append(obj)
        
        self.publisher.publish(msg)

    def detect(self, frame):
        results = self.model(frame)
        return results

def main(args=None):
    rclpy.init(args=args)
    object_detection = ObjectDetection()

    try:
        rclpy.spin(object_detection)
    except KeyboardInterrupt:
        object_detection.destroy_node()
    except Exception as e:
        print(e)
        object_detection.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
