
/* Any variable marked with g_ means its a global variable*/

#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <fstream>

using namespace std;

int g_slider_position = 0;
int g_run = 1, g_dontset = 0; //start in single step mode

/* By single step we mean one frame is displayed at a time when users 
   chooses a frame it will only display that frame to view the next frame
   the user needs to select the frame else it will run in continuous mode
   when pressed the letter 'r' 
*/


cv::VideoCapture g_cap;

void onTrackbarSlide (int pos, void *)
{
  // CAP_PROP_POS_XXXX : Used to get the video properties
 
  g_cap.set (cv::CAP_PROP_POS_FRAMES, pos);
  if(!g_dontset)
    g_run = 1;
  g_dontset = 0;
}

int main (int argc, char** argv)
{
  cv::namedWindow("VideoTrackBall", cv::WINDOW_AUTOSIZE);
  g_cap.open(string(argv[1]));
  
  // Get the video properties (width, height and no of frames in the Video)  

  int frames = (int) g_cap.get(cv::CAP_PROP_FRAME_COUNT);
  int tmpw = (int) g_cap.get(cv::CAP_PROP_FRAME_WIDTH);
  int tmph = (int) g_cap.get(cv::CAP_PROP_FRAME_HEIGHT);

  std::cout << "Video has " << frames << "frames of dimesnions( "<< tmpw <<", " << tmph << ")."<<endl;

  cv::createTrackbar("Position", "VideoTrackBall", &g_slider_position, frames, onTrackbarSlide);

  cv::Mat frame;

  for (; ;)
  {
    if(g_run != 0)
    {
      g_cap >> frame; 
      if(frame.empty()) break;
      int current_pos = (int) g_cap.get(cv::CAP_PROP_POS_FRAMES);
      g_dontset = 1;

      //Update the trackball position when user chooses the frame
      cv::setTrackbarPos("Position","VideoTrackBall",current_pos);
      cv::imshow("VideoTrackBall",frame);

      g_run-=1;
    }

    // Main Loop for choosing the way the video should play in
    char c = (char) cv::waitKey(10);
    if( c == 's' ) //single step
    { g_run = 1; cout <<"Single step run = " <<g_run <<endl;}
    if( c == 'r' ) //run mode
    { g_run = -1; cout << "Run mode, run = "<<g_run<<endl;}
    if( c == 27 )  // ASCII 27 = 'ESC' KEY
      break;

  }

  return (0);
}
