//
// Created by Admin on 2021/5/24.
//

#include <iostream>

using namespace std;
class Time{
private:
    int hh,mm,ss;
public:
    Time(int h=0,int m=0,int s=0)
        :hh(h),mm(m),ss(s){}
    void operator()(int h,int m,int s){
        hh=h;
        mm=m;
        ss=s;
    }
    void showTime(){
        cout<<hh<<":"<<mm<<":"<<ss<<endl;
    }
};

void runReloadBrackets(){
    Time t1(12,10,13);
    t1.showTime();
    t1.operator()(23,23,23);
    t1.showTime();
    t1(13,31,31);
    t1.showTime();

}




























