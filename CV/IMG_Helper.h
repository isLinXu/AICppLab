//
// Created by linxu on 2022/3/9.
//

#ifndef AICPPLAB_IMG_HELPER_H
#define AICPPLAB_IMG_HELPER_H

#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>

using namespace cv;
using namespace std;

class imageHelper {
public:
    static int imshow_image(const string& img_path,const string& file_name);
};


#endif //AICPPLAB_IMG_HELPER_H
