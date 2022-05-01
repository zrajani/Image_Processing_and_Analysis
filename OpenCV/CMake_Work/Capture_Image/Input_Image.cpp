#include<opencv2/opencv.hpp>
#include<iostream>

int main( int argc, char** argv){
  cv::namedWindow("Capturing Image",cv::WINDOW_AUTOSIZE);

  cv::VideoCapture cap;

  if(argc==1){
    cap.open(0);
  }else{
    cap.open(argv[1]);
  }
  if (!cap.isOpened()){
    std::cerr << "Couldn't Open Capture Camera"<< std::endl;
    return -1;
  }

  //cv::namedWindow("Output Window", cv::WINDOW_AUTOSIZE);
  cv::Mat frame;
  for(;;){
    cap>>frame;
    if (frame.empty()) break;
    cv::imshow("Capturing Image",frame);
    if ((char)cv::waitKey(33)>=0){imwrite("Zain.jpg",frame);break;}
  }

  return 0;
}
