//
// Created by Admin on 2021/5/22.
//

#include <iostream>
#include <string>

using namespace std;

class Employee{
private:
    string name;
    string id;
public:
    Employee(string name,string id){
        this->name = name;
        this->id = id;
    }
    string getName()const{
        return name;
    }
    string getId()const{
        return id;
    }
    float getSalary()const{
        return 0.0;
    }
    void print(){
        cout<<"name :"<<name<<"\t\t   id: "<<id<<endl;
    }
};

class Manager:public Employee{
private:
    float weekSalary;
public:
    Manager(string name,string id,int week): Employee(std::move(name),std::move(id)){
        weekSalary = (float)(week * 1000);
    }
    float getSalary() {
        return weekSalary;
    }

    void print() {
        cout<<"manager :"<<getName()<<"\t\t   id: "<<getId()
            <<"\t\t  salary sum :" <<getSalary()<<endl;
    }

};

class SaleWorker :public Employee{
private:
    float baseMoney = 800;
    float workMoney;
public:
    SaleWorker(string n,string id,int profit,int x):Employee(n,id){
        workMoney = baseMoney + profit*0.05*x;
    }
    float getSalary() {
        return workMoney;
    }
    void print(){
        cout<<"sale worker: "<<getName()<<"\t\t  id :"<<getId()
        <<"\t\t  total salary"<<getSalary()<<endl;
    }
};

class HourWorker:public Employee{
private:
    float hourMoney = 100.0;
    float totalMoney;
public:
    HourWorker(string nn,string id,int h): Employee(nn,id){
        totalMoney = h * hourMoney;
    }
    float getSalary() {
        return totalMoney;
    }
    void print() {
        cout<<"hour worker :" << getName()<<"\t\t  id :"<<getId()
        <<"\t\t   total salary:  "<<getSalary()<<endl;
    }
};






















