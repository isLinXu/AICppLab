//
// Created by linxu on 2022/3/9.
//

#include "IMG_Helper.h"

int ImageHelper::imshow_image(const string &img_path, const string &file_name) {

    Mat img = imread(img_path);

    // 检查图片读取是否有误
    if (img.empty()) {
        std::cout << "Could not read the image:" << img_path << std::endl;
        return 1;
    }
    // 显示图像：winname为窗口标题,img为cv::Mat对象
    cv::imshow("Display", img);
    int k = waitKey(0);

    // 等待按键设置功能：若按下's'则保存,按下'q'则退出
    if (k == 's') {
        imwrite(file_name + ".jpg", img);
    } else if (k == 'q'){
        return 0;
    }

    return 0;
}
