//
// Created by Admin on 2021/5/26.
//
//设计一个时间类Time，它能够完成秒钟的自增运算。

#include <iostream>

using namespace std;

class CustomTime{
private:
    int hour,minute,second;
public:
    CustomTime(int h,int m,int s);
    CustomTime operator++();
    //友元重载需要参数,访问私有成员
    friend CustomTime operator --(CustomTime &t);
    void display();
};


























