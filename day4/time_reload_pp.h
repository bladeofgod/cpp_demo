//
// Created by Admin on 2021/5/21.
//

/*
 * 重载++
 */

#include <iostream>

using namespace std;

class TimePP{
private:
    int hour,minute,second;

public:
    TimePP(int h=0,int m=0, int s=0){
        hour = h;
        minute = m;
        second = s;
    }
    void operator++();
    void showTime(){
        cout<<"show(++) time :"<<hour<<":"<<minute<<":"<<second<<endl;
    }
};

void TimePP::operator++() {
    ++second;
    if(second == 60) {
        second = 0;
        ++minute;
        if(minute == 60) {
            minute = 0;
            hour++;
            if(hour == 24) {
                hour = 0;
            }
        }
    }
}


#ifndef CPPDEMO_TIME_RELOAD_PP_H
#define CPPDEMO_TIME_RELOAD_PP_H

void runTimePP(){
    int count = 0;
    TimePP tp(23,59,59);
    while (count < 10) {
        ++tp;
        tp.showTime();
        count++;
    }
}

#endif //CPPDEMO_TIME_RELOAD_PP_H















