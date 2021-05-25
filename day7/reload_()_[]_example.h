//
// Created by Admin on 2021/5/25.
//

#include <iostream>

using namespace std;

class ReloadX{
public:
    int operator()(int i= 0){
        cout<<"X :: operator(" <<i<<")"<< endl;
        return i;
    }
    int operator()(int i,int j){
        cout<<"X :: operator ("<<i<<","<<j<<")"<<endl;
        return i;
    }
    int operator[](int i){
        cout<<"X :: operator ["<<i<<"]"<<endl;
        return i;
    }
    int operator[](char *p){
        cout<<"X :: operator ["<<p<<"]"<<endl;
        return 0;
    }
};

void runReloadExample(){
    ReloadX x;
    int i = x(x(1),2);
    int a = x[i];
    int b = x["abc"];
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}






























