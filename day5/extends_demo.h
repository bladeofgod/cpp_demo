//
// Created by Admin on 2021/5/22.
//

/*
 * 派生类和基类（继承）
 */

#include <iostream>

using namespace std;

class A{
    int a;
public:
    void setA(int x){
        a = x;
    }
    int getA() const{
        return a;
    }
};


class B:public A{
    int b;
public:
    void setB(int x){
        b = x;
    }
    int getB() const{
        return b;
    }
};

void f1(A a,int x){
    a.setA(x);
}

void f2(A *pA,int x){
    pA->setA(x);
    //(*pA).setA(x);
}

void f3(A &ra,int x){
    ra.setA(x);
}

void runExtendsDemo(){
    A a1,*pA;
    B b1,*pB;
    //将派生类赋值给基类
    //不可逆，与继承相似
    a1 = b1;
    cout<<a1.getA()<<endl;
    cout<<b1.getA()<<endl;
    a1.setA(10);
    cout<<"reset "<<a1.getA()<<endl;
    cout<<"reset "<<b1.getA()<<endl;
    //把派生类对象的地址赋值给基类指针
    pA = &b1;
    pA->setA(20);
    cout<<"reset by pointer "<<pA->getA()<<endl;
    cout<<"reset by pointer "<<b1.getA()<<endl;
    //用派生类对象初始化基类对象的引用。
    A &ra = b1;
    ra.setA(30);
    cout<<pA->getA()<<endl;
    cout<<b1.getA()<<endl;
    b1.setA(7);
    cout<<b1.getA()<<endl;
    f1(b1,100);
    cout<<"11111111111"<<endl;
    cout<<b1.getA()<<endl;
    f2(&b1,200);
    cout<<b1.getA()<<endl;
    f3(b1,300);
    cout<<b1.getA()<<endl;

}


















