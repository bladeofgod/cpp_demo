//
// Created by Admin on 2021/5/25.
//

/*
 * reload operator []
 * more important
 */


#include <iostream>
#include <cstring>

using namespace std;

struct Person{
    double salary;
    char *name;
};

class SalaryManages{
    //指向结构体 person 的指针
    //本质上是个数组，长度根据n有关
    //向下移动为:  employee++
    Person *employee;//结构体
    int max;
    int n;
public:
    SalaryManages(int max = 0){
        this->max = max;
        n = 0;
        employee = new Person[max];
    }
    //返回引用
    double &operator[] (char * name){
        Person *p;
        for(p = employee; p<employee + n;p++) {
            if(strcmp(p->name,name) == 0){
                //if inner var employee's name equal temp var(name)
                // return employee's salary
                return p->salary;
            }
            //no this employee
            p = employee + n++;
            //init this inner var employee
            p->name = new char[strlen(name)+1];
            strcpy(p->name,name);
            p->salary = 0;
            return p->salary;
        }
    }
    void display(){
        for(int i=0;i<n;i++){
            //遍历输出
            cout<<employee[i].name<<"----------"<<employee[i].salary<<endl;
        }
    }
};

void runReloadExamp(){
    SalaryManages s(3);
    s["tom"] = 2188;
    s["jerry"] = 3222;
    s["tomas"] = 1322;
    cout<<"tom"<<s["tom"]<<endl;
    cout<<"jerry"<<s["jerry"]<<endl;
    cout<<"tomas"<<s["tomas"]<<endl;
    cout<<"------------info of display-----------"<<endl;
    s.display();
}

















