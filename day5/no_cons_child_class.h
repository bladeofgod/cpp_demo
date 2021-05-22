//
// Created by Admin on 2021/5/22.
//

#include <iostream>

using namespace std;

/*
 * 整体顺序一致
 * 不管子类有没有，优先调用父类构造函数
 *
 * 析构相反，优先调用子类
 */

class NA{
public:
    NA(){ cout<<"Constructing NA"<<endl; }
    ~NA(){ cout<<"Destructing NA"<<endl; }
};

class NB : public NA{
public:
    ~NB(){ cout<<"Destructing NB"<<endl; }
};

void runNoCons(){
    NB b;
}















