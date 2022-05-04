//
// Created by linxu on 2022/5/4.
//

#ifndef AICPPLAB_DRAW_SHAPE_HELER_H
#define AICPPLAB_DRAW_SHAPE_HELER_H

#include "opencv4/opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
class DrawShapeHelper {
public:
    static int drawEllipse(Mat img, double angle);

    static int drawPolygon(Mat img);

    static int drawFilledCircle(Mat img, Point center);

    static int drawLine(Mat img, Point start, Point end);
};




#endif //AICPPLAB_DRAW_SHAPE_HELER_H
