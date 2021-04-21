/*
 * Program Name: VideoPlay.cpp
 *
 *  Created on: Apr. 10, 2020
 *      Author: Zain Rajani 
 */

#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include "opencv2/imgproc/imgproc.hpp"

using namespace std;

int main( int argc, char** argv )
{
	cv:: namedWindow("Dolby Advertisment", cv::WINDOW_AUTOSIZE);
	cv::VideoCapture cap;
	cap.open (string (argv[1]));

	cv:: Mat frame;
	for(;;)
	{
		cap>>frame;
		if (frame.empty()) break;  // Out of Frames
		cv::imshow("Dolby Advertisment",frame);
		if ((char) cv::waitKey(33)>=0) break;
	}

  return 0;
}
