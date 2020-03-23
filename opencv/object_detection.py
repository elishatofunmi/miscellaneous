from imutils.video import VideoStream
from imutils.video import FPS
import numpy as np
import argparse
import imutils
import time
import cv2
import matplotlib.pyplot as plt
import cvlib as cv
from cvlib.object_detection import draw_bbox


cam = cv2.VideoCapture(0)
print("[INFO] starting video stream...")
time.sleep(2.0)
fps = FPS().start()

# loop over the frames from the video stream
while True:
     ret, frame = cam.read()
     frame = imutils.resize(frame, width=800)
     
     bbox, label, conf = cv.detect_common_objects(frame)
     output_image = draw_bbox(frame, bbox, label, conf)
     cv2.imshow('object detection', output_image)
     key = cv2.waitKey(1) & 0xFF

     if key == ord('q'):
         break
    
     # update the FPS counter
     fps.update()
     fps.stop()
print("[INFO] elapsed time: {:.2f}".format(fps.elapsed()))
print("[INFO] approx. FPS: {:.2f}".format(fps.fps()))
# do a bit of cleanup
cv2.destroyAllWindows()