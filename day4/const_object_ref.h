//
// Created by Admin on 2021/5/19.
//

//常对象和常引用

#include <iostream>

using namespace std;

void display(const double &r);

#ifndef CPPDEMO_CONST_OBJECT_REF_H
#define CPPDEMO_CONST_OBJECT_REF_H

class AAA{
private:
    int x,y;
public:
    AAA(int i,int j){x = i; y = j;}
};

void runConstOR(){
    double d(9.5);
    display(d);
    //a 是常对象，不能被更新
    AAA const a(3,4);
}

void display(const double &r){
    //如果参数为常引用类型，那么函数无法更新r所引用的对象
    cout<<r<<endl;
}

#endif //CPPDEMO_CONST_OBJECT_REF_H
