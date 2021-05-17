//
// Created by Admin on 2021/5/17.
//

/*
 * 枚举类型
 */

#include <iostream>

using namespace std;

enum weekday{
    s,m,t,w,thu,fri,sat
};


#ifndef CPPDEMO_ENUM_DEMO_H
#define CPPDEMO_ENUM_DEMO_H

void runEnum(){
    enum weekday week = s;
    for(int i = week; i != fri;i++){
        cout<<i<<endl;
        cout<<week + s<<endl;
        cout<<"-------¹þ¹þ-------"<<endl;
    }
}

#endif //CPPDEMO_ENUM_DEMO_H
