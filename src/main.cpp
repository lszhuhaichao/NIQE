#include "NIQE.h"
#include <opencv2/opencv.hpp>
#include <iostream>

int main(int argc, char** argv){

	NIQE *niqe = new NIQE();
	cv::Mat img = cv::imread(argv[1]);
	double q = niqe->computeQuality(img);
	std::cout << "Image Quality: " << q << std::endl;
	delete niqe;
	return 0;
}