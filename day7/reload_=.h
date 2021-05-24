//
// Created by Admin on 2021/5/24.
//
#include <iostream>

using namespace std;

class X7{
public:

    //&operator 返回应用 方便连用(连续赋值)
    // 不加，则返回值  (a=b=c 将报错)
    X7 &operator = (const X7 &x){
        cout<<"a:"<<endl;
        return *this;
    }
};

void runReloadEqual(){
    X7 obj1,obj2,obj3;
    obj1 = obj2;
    obj1.operator=(obj2);
    obj1 = obj2 = obj3;
}
























