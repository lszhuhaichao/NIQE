#pragma once
#include <opencv2\core\core.hpp>

class IQA
{
public:
	virtual double computeQuality(cv::Mat img) = 0;
};