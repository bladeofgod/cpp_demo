//
// Created by Admin on 2021/5/22.
//
/*
 * 构造函数调用顺序
 */

#include <iostream>

using namespace std;

class CIA{
    int x;
public:
    CIA(int i=0){
        x = i;
        cout<<"CIA---------"<<x<<endl;
    }
};

class CIB{
    int y;
public:
    CIB(int i){
        y = i;
        cout<<"CIB----------"<<y<<endl;
    }
};

class CIC{
    int z;
public:
    CIC(int i){
        z = i;
        cout<<"CIC---------"<<z<<endl;
    }
};

class CID:public CIB{
public:
    CIC c1,c2;
    CIA *a1 = new CIA(10);
    CIA a0,a4;
    //优先调用父类(CIB)构造函数，之后按照public 顺序初始化
    CID(): a4(4), c2(2), c1(1), CIB(1){
        //构造自身是最后调用
        cout<<"cid constructor -----  5" <<endl;
    }
};

void showInvokeOrder(){
    CID d;

}






























