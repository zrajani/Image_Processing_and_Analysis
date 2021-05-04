# include <opencv2/opencv.hpp>
//# include <opencv2/imgcodecs.hpp>
//# include <opencv2/core/types.hpp>

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

  cv::medianBlur(image,out,5);
  cv::medianBlur(out,out,5);

  //Show smoothed image

  cv::imwrite("medianBlur.jpg",out);

  cv::imshow("Output Image",out);

  //Wait for the user to hit a key, windows will self destruct

  cv::waitKey(0);


}
