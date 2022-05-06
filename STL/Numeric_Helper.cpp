//
// Created by linxu on 2022/5/6.
//

#include "Numeric_Helper.h"


int NumericHelper::numericTest() {
    double score = 3.1415926;
    cout<<"numeric_limits<unsigned short>::min()= "<<numeric_limits<unsigned short>::min()<<endl; //unsigned short的最小值
    cout<<"numeric_limits<unsigned short>::max()= "<<numeric_limits<unsigned short>::max()<<endl;  //unsigned short的最大值
    cout<<"numeric_limits<int>::min()= "<<numeric_limits<int>::min()<<endl; //int的最小值
    cout<<"numeric_limits<int>::max()= "<<numeric_limits<int>::max()<<endl;  //int的最大值
    cout<<"numeric_limits<short>::min()= "<<numeric_limits<short>::min()<<endl;
    cout<<"numeric_limits<short>::max()= "<<numeric_limits<short>::max()<<endl;
    cout<<"numeric_limits<double>::min()= "<<numeric_limits<double>::min()<<endl;
    cout<<"numeric_limits<double>::max()= "<<numeric_limits<double>::max()<<endl;

    cout<<"numeric_limits<int>::is_signed()= "<<numeric_limits<int>::is_signed<<endl;//是否有正负号
    cout<<"numeric_limits<string>::is_specialized()= "<<numeric_limits<string>::is_specialized<<endl;//是否定义了数值极限
    return 0;
}