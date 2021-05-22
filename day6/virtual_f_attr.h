//
// Created by Admin on 2021/5/22.
//
/*
 * 虚函数特性
 */

#include <iostream>
#include <string>

using namespace std;

class VFA{
public:
    void f(int i){
        cout<<"vfa::f "<<endl;
    }
};

class VFB: public VFA{
public:
    virtual void f(int i){
        cout<<"vfb ::f "<<endl;
    }
};

class VFC:public VFB{
public:
    void f(int i){
        cout<<"vfc :: f() "<<endl;
    }
};

class VFD:public VFC{
public:
    void f(int i){
        cout<<"vfd :: f()"<<endl;
    }
};

void runVFaDemo(){
    VFA *va,a;
    VFB *vb,b;
    VFC c;
    VFD d;
    va = &a; va->f(1);
    vb = &b; vb->f(1);
    vb=&c; vb->f(1);
    vb=&d; vb->f(1);
}















