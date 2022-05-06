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

int PointHelper::learnPoint() {
    Point2f P(5, 1);
    cout << "Point(2D)=" << P << endl << endl;

    Point3f P3f(2, 6, 7);
    cout << "Point(3D)=" << P3f << endl << endl;


    vector<float> v;
    v.push_back((float) CV_PI);
    v.push_back(2);
    v.push_back(3.01f);
    cout << "Vector of floats via Mat=" << Mat(v) << endl << endl;

    vector<Point2f> vPoints(10);
    for (size_t i = 0; i < vPoints.size(); ++i) {
        vPoints[i] = Point2f((float) (i * 5), (float) (i % 7));
    }
    cout << "A vector of 2D Points=" << vPoints << endl << endl;
}