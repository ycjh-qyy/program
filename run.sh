cd ../darknet
rm out.txt
./darknet detect cfg/yolov3.cfg yolov3.weights ../ycjh/now.jpg
eog predictions.jpg &
cp -vf out.txt ../ycjh/main.in
cd ../ycjh
gedit main.in & 
g++ -o main main.cpp -lm
./main<main.in
