//
// Created by Admin on 2021/5/19.
//

#include <iostream>

using namespace std;

void swap(int &a,int &b);

#ifndef CPPDEMO_SWIP_NUM_H
#define CPPDEMO_SWIP_NUM_H

void runSwap(){
    int x1(5);
    int x2(7);
    cout<<x1<<" "<<x2<<endl;
    swap(x1,x2);
    cout<<x1<<"  "<<x2<<endl;
}

void swap(int &a,int &b){
    int t;
    t = a;
    a = b;
    b = t;
}

#endif //CPPDEMO_SWIP_NUM_H
