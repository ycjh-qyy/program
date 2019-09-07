import cv2
import os
def work(time):
    print(time)
    os.system('./run.sh')

vc = cv2.VideoCapture('data/main.mp4')
c = 0
print("Begin")
if vc.isOpened():
    rval, frame = vc.read()
else:
    rval = False
    print("Can't open file")

timeF =int(vc.get(5))
rval,frame = vc.read()
while rval: 
    if (c % timeF == 0):
        cv2.imwrite('now.jpg', frame)
        if ( c == timeF):
            work( int( c / timeF ) )
    c = c + 1
    rval,frame = vc.read()
vc.release()
print("End")

