#include <stdio.h>
#include <iostream>
#include "pic_handler.h"
#include "barCode.h"

int main()
{
    barCode barCode("C:\\Users\\eylon\\Desktop\\projects\\barCode-and-qrCode-reader\\tests\\0123456789005.png");
    //pic_handler handle;
    cv::Point test= barCode.find_first_line();
    std::cout << test.x << " " << test.y << std::endl;
    return 0;
}