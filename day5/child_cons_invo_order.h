//
// Created by Admin on 2021/5/22.
//
/*
 *
 * 派生类构造函数调用顺序
 */

#include <iostream>

using namespace std;

class FA{
public:
    FA() { cout<<"Constructing FA"<<endl;}
    ~FA(){ cout<<"Destructing FA"<<endl;}
};


class FB{
public:
    FB() { cout<<"Constructing FB"<<endl;}
    ~FB(){ cout<<"Destructing FB"<<endl;}
};


class FC{
public:
    FC() { cout<<"Constructing FC"<<endl;}
    ~FC(){ cout<<"Destructing FC"<<endl;}
};

///依然是优先调用父类构造，之后初始化成员函数，最后调用自身构造函数
class CD :public FC{
public:
    CD() { cout<<"Constructing CD"<<endl;}
    ~CD(){ cout<<"Destructing CD"<<endl;}
    FA fa;
    FB fb;
    FC fc;
};

void runChildConsIO(){
    CD cd;
}

















