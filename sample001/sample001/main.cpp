// 
// OpenCV Demo
// HPH Knowledgebase
// Fluvio L. Lobo Fenoglietto
// 12/10/2015
//

// The include command informs VS of the specific libraries and/or modules to consider during building.
// These references are important as functions/routines pertaining to these libraries will be used throughout this script.
#include<opencv\cv.h>
#include<opencv2\opencv.hpp>
#include<opencv\highgui.h>

using namespace cv;

int main() {

	// Create matrix to store image
	Mat image;

	// Initialize Capture
	VideoCapture cap;
	cap.open(0);

	// Create window to show image
	namedWindow("window", 1);

	while (1) {

		// Copy webcam stream to image
		cap >> image;

		// Print image to screen
		imshow("window", image);

		// Delay
		waitKey(25);

	} // End of while loop

} // End of application