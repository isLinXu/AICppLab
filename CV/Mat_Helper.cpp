//
// Created by linxu on 2022/5/4.
//

#include "Mat_Helper.h"

int matHelper::matTest() {
    // 使用构造函数[constructor]创建
    Mat M(2, 2, CV_8UC(2), Scalar(0, 0, 255));
    cout << "M=" << endl << "" << M << endl << endl;

    // 使用create构造函数
    M.create(4, 4, CV_8UC(2));
    cout << "M=" << endl << "" << M << endl << endl;

    // 创建多维矩阵
    int sz[3] = {2, 2, 2};
    Mat L(3, sz, CV_8UC(1), Scalar::all(0));

    // 使用MATLAB风格的eyes、one或zero创建矩阵
    // eyes 对角矩阵
    Mat Eyes = Mat::eye(4, 4, CV_64F);
    cout << "Eyes=" << endl << "" << Eyes << endl << endl;

    // ones 全一矩阵
    Mat Ones = Mat::ones(2, 2, CV_32F);
    cout << "Ones=" << endl << "" << Ones << endl << endl;

    // zeros 全零矩阵
    Mat Zero = Mat::zeros(3, 3, CV_8UC1);
    cout << "Zero=" << endl << "" << Zero << endl << endl;

    // 创建一个3x3双精度单位矩阵
    Mat C = (Mat_<double>(3, 3) << 0, -1, 0, -1, 5, -1, 0, -1, 0);
    cout << "C=" << endl << "" << C << endl << endl;

    // 矩阵克隆
    Mat RowClone = C.row(1).clone();
    Mat ColClone = C.col(1).clone();
    cout << "RowClone=" << endl << "" << RowClone << endl << endl;
    cout << "ColClone=" << endl << "" << ColClone << endl << endl;

    // 用随机值填充矩阵
    Mat R = Mat(3, 2, CV_8UC3);
    cv::randu(R, Scalar::all(0), Scalar(255));
    cout << "R(default)=" << endl << R << endl << endl;

    cout << "R(python)=" << endl << format(R, Formatter::FMT_PYTHON) << endl << endl;

    cout << "R(numpy)=" << endl << format(R, Formatter::FMT_NUMPY) << endl << endl;

    cout << "R(matlab)=" << endl << format(R, Formatter::FMT_MATLAB) << endl << endl;

    cout << "R(C)=" << endl << format(R, Formatter::FMT_C) << endl << endl;

    cout << "R(csv)=" << endl << format(R, Formatter::FMT_CSV) << endl << endl;
}