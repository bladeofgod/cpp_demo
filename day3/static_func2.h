//
// Created by Admin on 2021/5/19.
//

#include <iostream>

using namespace std;

class A{
public:
    static void f(A a);

private:
    int x;
};

#ifndef CPPDEMO_STATIC_FUNC2_H
#define CPPDEMO_STATIC_FUNC2_H

void runStaticF2(){
    A a;
    a.f(A());
}

void A::f(A a) {
    //静态成员函数只能引用属于该类的静态数据成员或静态成员函数。
    // cout<<x; //对x的引用是错误的
    cout<<"show a value of normal object by static function : "<<a.x<<endl;
}

#endif //CPPDEMO_STATIC_FUNC2_H
