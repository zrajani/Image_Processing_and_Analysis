# include <opencv2/opencv.hpp>
# include <opencv2/imgcodecs.hpp>

int main (int argc, char** argv )
{
  // Load an Image from the command line

  cv::Mat image= cv::imread(argv[1],-1);

  //Create some windows to show input and output images

  cv::namedWindow("Input Image",cv::WINDOW_AUTOSIZE);
  cv::namedWindow("Output Image",cv::WINDOW_AUTOSIZE);

  // Create a window to show our input image

  cv::imshow("Input Image",image);

  //Create an image to hold the smoothed Output

  cv::Mat out;

  /* Different Kinds of Blurr: GussianBlur(), blur(), medianBlur(),
  or bilateralFilter().*/

  cv::GaussianBlur(image,out,cv::Size(5,5),3,3);
  cv::GaussianBlur(out,out,cv::Size(5,5),3,3);

  //Show smoothed image

  cv::imwrite("Out.jpg",out);

  cv::imshow("Output Image",out);

  //Wait for the user to hit a key, windows will self destruct

  cv::waitKey(0);


}
