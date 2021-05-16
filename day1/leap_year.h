//
// Created by 45010 on 2021/5/16.
//

#include <iostream>

using namespace std;

#ifndef CPPDEMO_LEAP_YEAR_H
#define CPPDEMO_LEAP_YEAR_H
/*
 * 是否是闰年
 */

void isLeapYear(){
    int year;
    bool isLeapYear;
    cout << "enter the year";
    cin>>year;
    isLeapYear = (((year%4 == 0) && (year%100 != 0)) || (year%400 == 0));
    if(isLeapYear)
        cout << "is a leap year";
    else
        cout << "is not a leap year";

}



#endif //CPPDEMO_LEAP_YEAR_H
