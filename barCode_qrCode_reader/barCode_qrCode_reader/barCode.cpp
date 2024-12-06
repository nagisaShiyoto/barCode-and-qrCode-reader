#include "barCode.h"

barCode::barCode():hundler()
{

}

barCode::barCode(std::string path):hundler(path)
{
}

cv::Point barCode::find_first_line()
//finds the first line of the barcode 
//input:none(img from privat)
//output: cv::point of the pixel which is in the middle of the
// pixture and in the first line
{
	int hight = this->hundler.getImg().size().height / 2;
	int i = 0;
	//search the first black pixel
	for (i = 0; i < this->hundler.getImg().size().width && hundler.is_white(hight, i); i++);
	return cv::Point(hight, i);
}
