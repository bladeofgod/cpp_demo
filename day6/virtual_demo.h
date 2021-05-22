//
// Created by Admin on 2021/5/22.
//
/*
 * 从基类继承的成员将访问到派生类版本
 */

#include <iostream>

using namespace std;

class VB{
public:
    void f(){g();}
    //虚函数
    virtual void g(){
        cout<<"vb::g"<<endl;
    }
};

class VD : public VB{
public:
    //复写父类函数
    void g()override{
        cout<<"vd::g"<<endl;
    }
};

void runVirtualDemo(){
    VD d;
    d.f();
}





















