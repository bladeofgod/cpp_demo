//
// Created by Admin on 2021/5/22.
//

#include <iostream>

using namespace std;

class Base{
private:
    int x;
public:
    Base(int a){
        x = a;
        cout<<"base constructor x ="<<x<<endl;
    }
    ~Base(){
        cout<<"base destructor ..."<<endl;
    }
};

class Child :public Base{
private:
    int y;
public:
    Child(int a,int b): Base(a){
        y = b;
        cout<<"child constructor y ="<<y<<endl;
    }
    ~Child(){
        cout<<"child destructor ..."<<endl;
    }
};

void runChildCons(){
    Child child(1,2);
}

















