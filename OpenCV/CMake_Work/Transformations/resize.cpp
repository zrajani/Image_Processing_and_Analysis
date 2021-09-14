#include <opencv2/opencv.hpp>

int main(int argc , char** argv)
{
  cv::Mat img1, img2;
  cv::namedWindow("Input Image",cv::WINDOW_AUTOSIZE);
  cv::namedWindow("Output Image",cv::WINDOW_AUTOSIZE);

  img1=cv::imread(argv[1]);
  cv::imshow("Input Image",img1);

  cv::pyrUp(img1,img2);
  cv::imshow("Output Image",img2);

  cv::waitKey(0);

  return 0;
}
