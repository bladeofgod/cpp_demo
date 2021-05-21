//
// Created by Admin on 2021/5/21.
//
#include <iostream>
#include "clock.h"

using namespace std;

Clock::Clock(Clock &c) {
    hours = c.hours;
    minute = c.minute;
    second = c.second;
}

Clock::Clock(int newH, int newM, int newS) {
    hours = newH;
    minute = newM;
    second = newS;
}

void Clock::setTime(int newH, int newM, int newS) {
    hours = newH;
    minute = newM;
    second = newS;
}

void Clock::showTime() {
    cout<<"time is : " <<hours<<":"<<minute<<":"<<second<<endl;
}

Clock::~Clock() {
    cout<<"clock release"<<endl;
}













