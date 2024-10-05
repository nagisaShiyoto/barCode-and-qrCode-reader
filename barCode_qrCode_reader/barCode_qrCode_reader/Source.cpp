#include <stdio.h>
#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

int main()
{
    cv::Mat img = cv::imread("C:\\Users\\test0\\OneDrive\\שולחן העבודה\\project\\barCode-and-qrCode-reader\\tests\\1014500044744.png");
    cv::namedWindow("First OpenCV Application", cv::WINDOW_AUTOSIZE);
    cv::imshow("First OpenCV Application", img);
    cv::moveWindow("First OpenCV Application", 0, 45);
    cv::waitKey(0);
    cv::destroyAllWindows();
    return 0;
}