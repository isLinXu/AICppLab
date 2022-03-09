
#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <cstdio>


#include "Learn/Skeleton.h"
#include "CV/IMG_Helper.h"

using namespace std;
using namespace cv;


//-----------------------------------【main( )函数】--------------------------------------------
//		描述：控制台应用程序的入口函数，程序从这里开始
//-----------------------------------------------------------------------------------------------
int main( )
{
    // 打印Opencv版本信息
    std::cout << "OpenCV version : " << CV_VERSION << std::endl;

    string img_path = "lena.jpg";
    string file_name = "lena";


    //! 显示图片
    imageHelper::imshow_image(img_path, file_name);










    return 0;

}
