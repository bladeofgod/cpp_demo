//
// Created by Admin on 2021/5/26.
//
//设计一个计数器counter，用类成员重载自增运算符实现计数器的自增，用友元重载实现计数器的自减。

#include <iostream>

using namespace std;
class Counter{
private:
    int n;
public:
    Counter(int i=0):n(i){};
    Counter operator++();
    Counter operator++(int);
    friend Counter operator--(Counter &c);
    friend Counter operator--(Counter &c,int);
    void display();
};





















