//
// Created by Admin on 2021/5/22.
//
/*
 * ������
 */

#include <iostream>

using namespace std;


class Figure{
protected:
    double x,y;
public:
    void set(double i,double j){
        x = i;
        y = j;
    }
    virtual void area()=0;// ���麯��
};

class Triangle:public Figure{
public:
    void area() override{
        cout<<"�����������"<<x * y * 0.5<<endl;
    }
};

class Rectangle:public Figure{
public:
    void area() override {
        cout<<"��������� "<<x*y<<endl;

    }
};


void runACdemo(){
    Figure *pf = NULL;
    //�����಻�ܱ�ʵ����
    Rectangle r;
    Triangle t;
    t.set(10,20);
    pf = &t;
    pf->area();
    r.set(10,20);
    pf = &r;
    pf->area();

    //�����������
    Figure &rf = t;

    rf.set(20,20);
    rf.area();

}




























