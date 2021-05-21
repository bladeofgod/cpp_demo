//
// Created by Admin on 2021/5/21.
//
/*
 * 拷贝构造函数
 */

class Clock{
private:
    int hours,minute,second;
public:
    Clock(int newH,int newM,int newS);
    Clock(Clock &c) ;//拷贝构造函数,如果不加，编译器会自动生成一个拷贝构造函数，因此加不加都可以直接使用。
    void setTime(int newH,int newM,int newS);
    void showTime();
    ~Clock();//析构函数，编译器会自动产生一个默认的析构函数。

};


#ifndef CPPDEMO_CLOCK_H
#define CPPDEMO_CLOCK_H



#endif //CPPDEMO_CLOCK_H
