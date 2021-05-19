//
// Created by Admin on 2021/5/19.
//

//常对象和普通函数

#include <iostream>

using namespace std;

class R{
private:
    int r1,r2;
public:
    R(int rr1,int rr2){r1 = rr1;r2 = rr2;}
    //const 区分成员重载函数
    void print();
    void print() const;//不会修改成员变量
};

/*
常成员函数说明格式：类型说明符  函数名（参数表）const;
这里，const是函数类型的一个组成部分，因此在实现部分也要带const关键字。
const关键字可以被用于参与对重载函数的区分
通过常对象只能调用它的常成员函数
*/

void R::print() {
    cout<<"normal invoke "<<endl;
    cout<<r1<<":"<<r2<<endl;
}

void R::print() const {
    cout<<"const object invoke"<<endl;
    cout<<r1<<":"<<r2<<endl;
}

#ifndef CPPDEMO_CONST_DEMO_2_H
#define CPPDEMO_CONST_DEMO_2_H

void runConstD2(){
    R a(5,4);
    a.print();
    //1. 表示成员函数隐含传入的this指针为const指针，决定了在该成员函数中，
    // 任意修改它所在的类的成员的操作都是不允许的（因为隐含了对this指针的const引用）；
    // 2. 唯一的例外是对于mutable修饰的成员。加了const的成员函数可以被非const对象和const对象调用，
    // 但不加const的成员函数只能被非const对象调用
    // 借助1 实现了方法重载
    const R b(20,52);
    b.print();
}


#endif //CPPDEMO_CONST_DEMO_2_H
