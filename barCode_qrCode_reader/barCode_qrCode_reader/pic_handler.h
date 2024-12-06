#pragma once
#include <iostream>
#include <string.h>
#include <opencv2/opencv.hpp>
class pic_handler
{
public:
	pic_handler(std::string pic_path);
	pic_handler();
	cv::Mat getImg()const;
	bool is_white(int hight, int width);
private:
	cv::Mat analayzed_img;//img to read the code
	cv::Mat current_img;//innput img from a live video


	
};

