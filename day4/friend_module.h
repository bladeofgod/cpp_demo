//
// Created by Admin on 2021/5/20.
//
//使用友元函数计算两点间距离

#include <iostream>
#include <cmath>

using namespace std;

class FMPoint{
private:
    float x,y;
public:
    FMPoint(float a=0,float b=0):x(a),y(b){}
    float getX(){
        return x;
    }
    float getY(){
        return y;
    }
    friend float distance(FMPoint &a, FMPoint &b);
};

//通过将一个模块声明为另一个模块的友元，一个模块能够引用到另一个模块中本是被隐藏的信息。
float distance(FMPoint &a, FMPoint &b){
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return sqrt(dx*dx + dy*dy);
}

#ifndef CPPDEMO_FRIEND_MODULE_H
#define CPPDEMO_FRIEND_MODULE_H

void runFM(){
    FMPoint p1(3.0,5.0),p2(4.0,6.0);
    cout<<"the distance from points :" <<distance(p1,p2)<<endl;
}

#endif //CPPDEMO_FRIEND_MODULE_H
