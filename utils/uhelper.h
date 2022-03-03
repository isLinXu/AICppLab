//
// Created by linxu on 2021/5/14.
//

#ifndef AICPPLAB_UHELPER_H
#define AICPPLAB_UHELPER_H

#include <iostream>
#include <string>
#include <chrono>
#include <climits>
#include <zconf.h>
#include <sstream>
#include <fstream>
#include <sys/stat.h>

using namespace std;

// 静态全局函数
class IGlobal {

public:
    //----------------------系统设置函数-------------------------
    /**写入调试数据到日志文件*/
    static void writeLog(string name, string ss){
        time_t nowtime;
        struct tm* p;;
        time(&nowtime);
        p = localtime(&nowtime);
        ofstream writeLog("/home/leoxae/桌面/aiclog.log",ios::app);//app表示每次操作前均定位到文件末尾
        if(writeLog.fail()){
            cout<<"error\n";
        }
        //打印当前系统时间
        writeLog << p->tm_year+1900 << "-" << p->tm_mon+1 << "-" << p->tm_mday << "  " << p->tm_hour << ":" << p->tm_min << ":" << p->tm_sec << "  ";
        writeLog << name << ":" << ss << endl;
        writeLog.close();
    }

    /**获得相关绝对路径*/
    static string DATA_PATH(){
        char buffer[PATH_MAX];
        getcwd(buffer, PATH_MAX);
        string path, DATA_PATH;
        path = buffer;
        DATA_PATH = path.substr(0, path.find_last_of('/'));
        return DATA_PATH;
    }

    /**判断文件是否存在*/
    static bool FileExists(const string &fullPath)
    {
        try{
            struct stat statbuf;
            return !stat(fullPath.c_str(), &statbuf);
        } catch (exception ex){
            return false;
        }
    }

    /**获得运行时间差*/
    static long getTickCount() {
        auto now = chrono::steady_clock::now();
        chrono::milliseconds ms(0);
        ms = chrono::duration_cast<chrono::milliseconds>(now.time_since_epoch());
        return ms.count();
    }


    //----------------------转换函数-------------------------

    /**对象转换成string类型,暂不支持vector*/
    template<typename T>
    static auto toString(const T& t)
    {
        //创建一个格式化输出流
        ostringstream oss;
        //把值传递到流中
        oss << t;
        return oss.str();
    }
};


#endif //AICPPLAB_UHELPER_H
