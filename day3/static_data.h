//
// Created by Admin on 2021/5/19.
//


/*
学习知识：
静态数据成员
用关键字static声明
该类的所有对象维护该成员的同一个拷贝
必须在类外定义和初始化，用(::)来指明所属的类。
*/

#include <iostream>

using namespace std;

class Point{
private:
    int x,y;
    //静态数据成员，必须在外部定义和初始化，内部不能直接初始化！
    static int countP;
public:
    Point(int xx=0,int yy=0){
        x = xx; y = yy;
    }
    Point(Point &p);
    int getX(){return x;}
    int getY(){return y;}
    void getC(){
        cout<<"object id = "<<countP<<endl;
    }
};

int Point::countP = 0;


#ifndef CPPDEMO_STATIC_DATA_H
#define CPPDEMO_STATIC_DATA_H

Point::Point(Point &p) {
    x = p.x;
    y = p.y;
    countP++;
}

void runStaticData(){
    Point a(4,5);
    cout<<"Point a , "<<a.getX()<<","<<a.getY();
    a.getC();
    Point b(a);
    cout<<"point b , "<<a.getX()<<","<<a.getY();
    b.getC();
}

#endif //CPPDEMO_STATIC_DATA_H
