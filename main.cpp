

#include "RunManager.h"
#include "STL/Numeric_Helper.h"
#include "CV/Mat_Helper.h"
#include "CV/Point_Helper.h"

using namespace std;
using namespace cv;

//-----------------------------------【main( )函数】--------------------------------------------
//		描述：控制台应用程序的入口函数，程序从这里开始
//-----------------------------------------------------------------------------------------------
int main() {
    // 打印Opencv版本信息
    std::cout << "OpenCV version : " << CV_VERSION << std::endl;

    RunManager::testimshow();

    RunManager::drawDemo();

    NumericHelper::numericTest();

    matHelper::matTest();

    PointHelper::learnPoint();

    return 0;
}

