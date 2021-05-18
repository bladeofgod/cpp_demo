//
// Created by Admin on 2021/5/18.
//
/*
 * 递归 1
 */

#include <iostream>

using namespace std;

int f(int n);

#ifndef CPPDEMO_RECURSION_1_H
#define CPPDEMO_RECURSION_1_H

void recursion_1(){
    cout<<"input x"<<endl;
    int x;
    cin>>x;
    cout<<f(x)<<endl;
}

int f(int n){
    if(n==0) {
        return 1;
    } else {
        return n * f(n-1);
    }
}

#endif //CPPDEMO_RECURSION_1_H
