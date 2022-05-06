//
// Created by linxu on 2022/5/4.
//

#include "Point_Helper.h"

int PointHelper::testPoint() {
    Point pt1;
    pt1.x = 10;
    pt1.y = 8;

    Point pt2 = Point(10, 8);
    cout << "pt1=>" << pt1 << "pt2=>" << pt2 << endl;
}