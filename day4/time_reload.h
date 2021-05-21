//
// Created by Admin on 2021/5/21.
//
/*
 * 重载 ()
 */

#include <iostream>

using namespace std;

class Time {
private:
    int hh,mm,ss;
public:
    Time(int h=0,int m=0,int s=0):hh(h),mm(m),ss(s){}
    void operator()(int h,int m,int s){
        hh=h;
        mm=m;
        ss=s;
    }
    void showTime(){
        cout<<"show time :"<<hh<<":"<<mm<<":"<<ss<<endl;
    }
};


#ifndef CPPDEMO_TIME_RELOAD_H
#define CPPDEMO_TIME_RELOAD_H

void runTimeReload(){
    Time t1(12,10,11);
    t1.showTime();
    t1.operator()(23,22,21);
    t1.showTime();
    t1(10,10,10);
    t1.showTime();
}

#endif //CPPDEMO_TIME_RELOAD_H
