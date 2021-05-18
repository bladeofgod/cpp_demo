//
// Created by Admin on 2021/5/18.
//

#include <iostream>

using namespace std;
int i =1;//全局变量，具有静态生存期

void other();

#ifndef CPPDEMO_STATIC_VAR_H
#define CPPDEMO_STATIC_VAR_H

void runStatic(){
    static int a; //静态局部，全局寿命，局部可见
    int b = -10; // b,c 为局部变量 ，动态生存周期
    int c = 0;
    other();
    cout<<"-----main----"<<endl;
    cout<<" i: "<<i<<" a: "<<a<<" b: "<<b<<" c: "<<c<<endl;//1 0 -10 0
    c =c+8;
    cout<<"-----main----"<<endl;
    cout<<" i: "<<i<<" a: "<<a<<" b: "<<b<<" c: "<<c<<endl;//33 0 -10 8
    i = i+10;
    other();
}

void other(){
    //a,b 为静态局部变量，具有全局寿命，局部可见
    //第一次进入函数时，被初始化
    static int a = 2;
    static int b;
    //c 局部变量，动态生存期
    int c = 10;
    a = a+2;
    i = i+32;
    c = c+5;
    cout<<"-----other----"<<endl;
    cout<<" i: "<<i<<" a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
    b = a;

}

#endif //CPPDEMO_STATIC_VAR_H
