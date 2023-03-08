//
// Created by linxu on 2022/5/4.
//

#include "RunManager.h"
#include "CV/Draw_Shape_Heler.h"
#include "CV/IMG_Helper.h"

int RunManager::testimshow() {
    string img_path = "../lena.jpg";
    string file_name = "lena";

    //! 显示图片
    ImageHelper::imshow_image(img_path, file_name);
}

int RunManager::drawDemo() {
    int w = 400;
    char atom_window[] = "Drawing 1: Atom";
    char rook_window[] = "Drawing 2: Rook";
    Mat atom_image = Mat::zeros(w, w, CV_8UC3);
    Mat rook_image = Mat::zeros(w, w, CV_8UC3);
    DrawShapeHelper::drawEllipse(atom_image, 90);
    DrawShapeHelper::drawEllipse(atom_image, 0);
    DrawShapeHelper::drawEllipse(atom_image, 45);
    DrawShapeHelper::drawEllipse(atom_image, -45);
    DrawShapeHelper::drawFilledCircle(atom_image, Point(w / 2, w / 2));
    DrawShapeHelper::drawPolygon(rook_image);
    rectangle(rook_image,
              Point(0, 7 * w / 8),
              Point(w, w),
              Scalar(0, 255, 255),
              FILLED,
              LINE_8);
    DrawShapeHelper::drawLine(rook_image, Point(0, 15 * w / 16), Point(w, 15 * w / 16));
    DrawShapeHelper::drawLine(rook_image, Point(w / 4, 7 * w / 8), Point(w / 4, w));
    DrawShapeHelper::drawLine(rook_image, Point(w / 2, 7 * w / 8), Point(w / 2, w));
    DrawShapeHelper::drawLine(rook_image, Point(3 * w / 4, 7 * w / 8), Point(3 * w / 4, w));
    cv::imshow(atom_window, atom_image);
    moveWindow(atom_window, 0, 200);
    cv::imshow(rook_window, rook_image);
    moveWindow(rook_window, w, 200);
    waitKey(0);
}