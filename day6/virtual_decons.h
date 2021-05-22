//
// Created by Admin on 2021/5/22.
//
/*
 * 虚析构函数
 */
#include <iostream>

using namespace std;

class VDA{
public:
    virtual ~VDA(){
        cout<<"call vda::~vda()"<<endl;
    }
};

class VDB : public VDA{
    char *buf;
public:
    VDB(int i){
        buf = new char [i];
    }
    ~VDB(){
        delete [] buf;
        cout<<"call vdb::~vdb"<<endl;
    }
};

void runVDdemo(){
    VDA * a = new VDB(23);
    //触发析构函数，优先子类，后父类
    delete a;
}
















