#pragma once
#include <opencv2\core\core.hpp>
#include <vector>
#include "IQA.h"

class NIQE : public IQA {
private:
	double mean[36];
	double covar[36][36];
	int blockSize;
	double sharpnessThreshold;
	void init(double mean[36], double covar[36][36], int blockSize, double sharpnessThreshold);
	std::vector<double> computeFeature(cv::Mat img);
	void estimateaggdparam(cv::Mat img, double &alpha, double &betal, double &betar);
public:
	NIQE();
	NIQE(double mean[36], double covar[36][36], int blockSize, double sharpnessThreshold);
	double computeQuality(cv::Mat img);
};
