//
// Created by Admin on 2021/5/22.
//
/*
 * 抽象类
 */

#include <iostream>

using namespace std;


class Figure{
protected:
    double x,y;
public:
    void set(double i,double j){
        x = i;
        y = j;
    }
    virtual void area()=0;// 纯虚函数
};

class Triangle:public Figure{
public:
    void area() override{
        cout<<"三角形面积："<<x * y * 0.5<<endl;
    }
};

class Rectangle:public Figure{
public:
    void area() override {
        cout<<"矩形面积： "<<x*y<<endl;

    }
};


void runACdemo(){
    Figure *pf = NULL;
    //抽象类不能被实例化
    Rectangle r;
    Triangle t;
    t.set(10,20);
    pf = &t;
    pf->area();
    r.set(10,20);
    pf = &r;
    pf->area();

    //抽象类的引用
    Figure &rf = t;

    rf.set(20,20);
    rf.area();

}




























