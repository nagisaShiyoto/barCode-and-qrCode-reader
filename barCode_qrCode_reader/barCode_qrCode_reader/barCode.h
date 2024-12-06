#pragma once
#include "pic_handler.h"

class barCode
{
public:
	barCode();
	barCode(std::string path);



	cv::Point find_first_line();
	int find_line_size();
private:
	pic_handler hundler;

};

