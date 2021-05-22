//
// Created by Admin on 2021/5/22.
//
/*
 * 派生类传参给父类
 */

#include <iostream>

using namespace std;

class CP{
protected:
    int x,y;
public:
    CP(int a, int b){
        x = a;y = b;
        cout<<"constructing point ("<<x<<","<<y<<")"<<endl;
    }
};

class Line:public CP{
protected:
    int len;
public:
    Line(int a,int b,int l): CP(a,b){
        len = l;
        cout<<"constructing line , len ..." <<len<<endl;
    }
};

void runPassParam(){
    Line l1(1,2,3);
}




















