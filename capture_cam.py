from imutils.video import VideoStream
import cv2
import os
from imutils.video import VideoStream

def capture_c(var_std_name,var_roll):
    cap = cv2.VideoCapture(0)
    # cap = VideoStream(src=0).start()
    while(True):
        ret, frame = cap.read()
        cv2.imshow('Capture', frame)
        if cv2.waitKey(1) & 0xFF==ord('c'):
            file_path="images/"+str(var_std_name)+str(var_roll)+".jpg"
            cv2.imwrite(file_path,frame)
            break
