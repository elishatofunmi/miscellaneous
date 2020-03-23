import cv2
import os

get_dir = "/home/odemakinde/Desktop"
vid_directory = get_dir + 'output.mp4'

cap = cv2.VideoCapture(0)
fourcc = cv2.VideoWriter_fourcc(*'XVID')
out = cv2.VideoWriter(vid_directory,fourcc,20.0,(640,480))
import time

while (cap.isOpened()):
    ret, frame = cap.read()
    
    if ret == True:
        
        #print(cap.get(cv2.CAP_PROP_FRAME_HEIGHT))
        #print(cap.get(cv2.CAP_PROP_FRAME_WIDTH))
        time.sleep(3)
        out.write(frame)
        #gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
        cv2.imshow('frame',frame)

        if cv2.waitKey(1) & 0xFF == ord('q'):
            break
    else:
        break
        
cap.release()
out.release()
cv2.destroyAllWindows()