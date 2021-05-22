//
// Created by Admin on 2021/5/22.
//
//Eg7-1.cpp
//基类指针或引用指向派生类对象时,虚函数与非虚函数区别：
//声明Employee的print为虚函数，则可访问到Manager的print函数，非虚函数，则只能访问到Employee的print
#include <iostream>
#include <string>
using namespace std;

class Employee{
private:
    string name;
    string id;
public:
    Employee(string name,string id);
    string getName();
    string getId();
    float getSalary();
    virtual void print();
};

Employee::Employee(string name, string id) {
    this->name = name;
    this->id = id;
}

string Employee::getName() {
    return name;
}

string Employee::getId() {
    return id;
}
float Employee::getSalary() {
    return 0.0;
}

void Employee::print() {
    cout<<"name :"<<name<<"\t"<<"id: "<<id<<endl;
}

class Manager :public Employee{
private:
    float weeklySalary;
public:
    Manager(string name,string id,float s=0.0): Employee(name,id){
        weeklySalary = s;
    }
    void setSalary(float s){
        weeklySalary = s;
    }
    float getSalary() const{
        return weeklySalary;
    }
    void print() override{
        cout<<"manager :"<<getName()<<"\t"<<"id :"<<getId()<<"\t"<<"salary :"<<getSalary()<<endl;
    }
};

void runVFDdemo(){
    Employee e("小米","123123"),*pm;
    Manager m("大米","321321",333);

    m.print();
    pm = &m;
    pm->print();
    Employee &rm = m;
    rm.print();

}





















