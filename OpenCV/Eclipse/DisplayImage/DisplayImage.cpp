// Author: Zain Rajani

#include <opencv2/opencv.hpp>
using namespace cv;
int main( int argc, char** argv )
{
  Mat image;
  image = imread(argv[1],1);
  if( argc != 2 || !image.data )
    {
      printf( "No image data \n" );
      return -1;
    }
  namedWindow( "Display Image",WINDOW_AUTOSIZE);
  // If second argument in the above is 0 then user can resize the image
  imshow( "Display Image", image );
  // Delay key instructions will wait for the user if 0 or negative waits indefinitely and
  // the value is in milliseconds
  waitKey(5000);
  return 0;
}
