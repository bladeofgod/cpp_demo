//
// Created by Admin on 2021/5/26.
//
#include <iostream>
#include "custom_time.h"

using namespace std;

CustomTime::CustomTime(int h, int m, int s) {
    hour=h;
    minute=m;
    second=s;
    if(hour>=24)
        hour =0;
    if(minute>=60)
        minute=0;
    if(second>=60)
        second=0;
}

CustomTime CustomTime::operator++() {
    ++second;
    if(second>=60){
        second = 0;
        ++minute;
        if(minute>=60){
            minute=0;
            if(hour>=24)
                hour = 0;
        }
    }
    return *this;
}

CustomTime operator--(CustomTime &t) {
    --t.second;
    if(t.second >=60) {
        t.second = 0;
        ++t.minute;
        if(t.minute>=60) {
            t.minute =0;
            ++t.hour;
            if(t.hour>=24)
                t.hour = 0;
        }
    }
    return t;
}

void CustomTime::display() {
    cout<<hour<<":"<<minute<<":"<<second<<endl;
}



























