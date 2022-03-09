//
// Created by linxu on 2022/3/9.
//

#include "IMG_Helper.h"

int imageHelper::imshow_image(const string &img_path, const string &file_name) {

    Mat img = imread(img_path);

    if (img.empty()) {
        std::cout << "Could not read the image:" << img_path << std::endl;
        return 1;
    }
    cv::imshow("Display", img);
    int k = waitKey(0);

    if (k == 's') {
        imwrite(file_name + ".jpg", img);
    } else if (k == 'q'){
        return 0;
    }

    return 0;
}
