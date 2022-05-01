#include<opencv2/opencv.hpp>
#include<iostream>

int main( int argc, char** argv){
  cv::namedWindow("Capturing Image",cv::WINDOW_AUTOSIZE);

  cv::VideoCapture cap;

  if(argc==1){
    cap.open(0);    // Check if Camera is Open
  }else{
    cap.open(argv[1]);
  }
  if (!cap.isOpened()){
    std::cerr << "Couldn't Open Capture Camera"<< std::endl;  // Throw an error
    return -1;
  }

  //cv::namedWindow("Output Window", cv::WINDOW_AUTOSIZE); <---- Ignore as the line will open unnecessary window

  // Start to operate in Video Mode
  cv::Mat frame;
  for(;;){
    cap>>frame;
    if (frame.empty()) break;
    cv::imshow("Capturing Image",frame);  // Display the window
    if ((char)cv::waitKey(33)>=0){imwrite("Zain.jpg",frame);break;}  // When closing the last window capture the file and save it
  }

  return 0;
}
