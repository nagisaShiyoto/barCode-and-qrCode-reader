#include <stdio.h>
#include <iostream>
#include "pic_handler.h"

int main()
{
    pic_handler handle("C:\\Users\\test0\\OneDrive\\שולחן העבודה\\project\\barCode-and-qrCode-reader\\tests\\0123456789005.png");
    //pic_handler handle;
    cv::Point test=handle.find_first_line();
    std::cout << test.x << " " << test.y << std::endl;
    return 0;
}