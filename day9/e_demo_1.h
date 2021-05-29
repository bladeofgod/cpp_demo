//
// Created by 45010 on 2021/5/29.
//

#include <iostream>

using namespace std;

class BaseException{
public:
    virtual char *where(){
        return "basic exception..";
    }
};

class FileSysException : public BaseException{
public:
    char *where() override{
        return "file exception...";
    }
};

class FileNotFound : public FileSysException{
public:
    char *where() override {
        return "file not found exception...";
    }
};

class DiskNotFound : public FileSysException{
public:
    char *where()override{
        return "disk not found...";
    }
};

void runFileE(){
    try{

        throw FileSysException();
    }
    catch(DiskNotFound p){cout<<p.where()<<endl;}
    catch(FileNotFound p){cout<<p.where()<<endl;}
    catch(FileSysException p){cout<<p.where()<<endl;}
    catch(BaseException p){cout<<p.where()<<endl;}
    try{

        throw DiskNotFound();
    }
    catch(BaseException p){cout<<p.where()<<endl;}
    catch(FileSysException p){cout<<p.where()<<endl;}
    catch(DiskNotFound p){cout<<p.where()<<endl;}
    catch(FileNotFound p){cout<<p.where()<<endl;}
}





const int MAX=3;
class Full{};
class Empty{};

class StackE{
private:
    int s[MAX];
    int top;
public:
    void push(int a);
    int pop();
    StackE(){top = -1;};
};

void StackE::push(int a) {
    if(top >= MAX -1){
        throw Full();
    }
    s[++top] =a;
}

int StackE::pop() {
    if(top<0) throw Empty();
    return s[top--];
}

void runStackE(){
    StackE s;
    try {
        s.push(3);
        s.push(20);
        s.push(30);
        cout<<"index 0 ="<<s.pop()<<endl;
        cout<<"index 1 ="<<s.pop()<<endl;
        cout<<"index 2 ="<<s.pop()<<endl;
        cout<<"index 3 ="<<s.pop()<<endl;
    }
    catch (Full){
        cout<<"stack is full"<<endl;
    }
    catch (Empty) {
        cout<<"stack is empty"<<endl;
    }
}



class AAA{
private:
    int a;
public:
    AAA(int n = 0):a(n){}
    ~AAA(){cout<<"in aaa destruction..."<<endl;}
};

class BBB{
    AAA obj[3];
    double *pb[10];
public:
    BBB(int k){
        cout<<"int bbb construction..."<<endl;
        for(int i=0;i<10;i++){
            pb[i] = new double[200000000];
            if(pb[i] ==0)
                throw i;
            else
                cout<<"allocated 2000000 double in pb ["<<i<<"]"<<endl;
        }
    }
};

void runE71(){
    try {
        BBB b(2);
    }catch (int e) {
        cout<<"catch e  :"<<e<<endl;
    }
}


//内部再次throw异常的时候，函数不要带throw()
void handler7(int n){
    try {
        if(n ==1)throw n;
        cout<<"all is ok..."<<endl;
    }
    catch (int n){
        cout<<"catch an int exception.."<<endl;
        throw n;
    }
}

void runE7(){
    try{
        handler7(1);
    }
    catch (int n) {
        cout<<"catch an exception at outer..."<<endl;
    }
    cout<<"endl..."<<endl;
}


void errHandler(int n)throw(){
    try {
        if(n == 1)throw n;
        if(n==2)throw 'x';
        if(n==3) throw 1.1;
    }
    catch (...) {
        cout<<"catch a error"<<endl;
    }
}

void runE6(){
    errHandler(1);
    errHandler(2);
    errHandler(3);
}

void handler(int n)throw(int,char,double){
    if(n == 1)throw n;
    if(n==2)throw 'x';
    if(n==3) throw 1.1;
}

void runE5(){
    cout<<"before handler ..."<<endl;
    try {
        handler(1);
    }
    catch (int i){cout<<"catch int"<<endl;}
    catch (char c) {
        cout<<"catch char"<<endl;
    }
    catch(double d){
        cout<<"catch a double"<<endl;
    }
}


void runE3(){
    int t;
    try{
        if(t== 100) throw "it's at the bolling point";
        else if(t==0) throw "it's reached the freezing point";
        else cout<<"this temperature is ok.."<<endl;
    }
    catch (int t){
        cout<<"temperature = "<<t<<endl;
    }
    catch (char * c) {
        cout<<c<<endl;
        
    }
}

void runE2(){
    cout<<"1--before try block"<<endl;

    try {
        cout<<"2--inside try block..."<<endl;
        throw 10;
        cout<<"3--after throw"<<endl;
    }
    catch (double i){
        cout<<"3---after throw..."<<i<<endl;
    }
    cout<<"5---after catch"<<endl;

}

void runE1(){
    cout<<"1--before try block"<<endl;
    try{
        cout<<"2--inside try block"<<endl;
        throw 10;
        cout<<"3-- after throw"<<endl;
    }
    catch (int i){
        cout<<"4--in catch block 1 ...exception is.."<<i<<endl;
    }
    catch (char *s) {
        cout<<"5-- in catch block 2 ... exception .. errorcode is.."<<s<<endl;

    }
    cout<<"6--after catch";

}













