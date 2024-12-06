#include "pic_handler.h"

pic_handler::pic_handler(std::string pic_path)
{
	this->current_img=cv::imread(pic_path);//create the img
	cv::cvtColor(this->current_img, this->analayzed_img, cv::COLOR_BGR2GRAY);
}

pic_handler::pic_handler()
{
	cv::VideoCapture cap = cv::VideoCapture(0);//takes the first img for anaylze
	cap.read(this->current_img);
	cv::cvtColor(this->current_img, this->analayzed_img, cv::COLOR_BGR2GRAY);

}

cv::Mat pic_handler::getImg() const
{
	return this->analayzed_img;
}





bool pic_handler::is_white(int x, int y)
//check if the pixel is white in a graysacle img
//input:the cordinates in the pic
//output:true-white false-not white
{
	const int WHITE_THRESHOLD = 150;
	return (this->analayzed_img.row(x).data[y] > WHITE_THRESHOLD);
}
