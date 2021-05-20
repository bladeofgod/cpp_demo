//
// Created by Admin on 2021/5/20.
//

/*
若一个类为另一个类的友元，则此类的所有成员都能访问对方类的私有成员。
声明语法：将友元类名在另一个类中使用friend修饰说明。
*/

/*
如果声明B类是A类的友元，B类的成员函数就可以访问A类的私有和保护数据，
但A类的成员函数却不能访问B类的私有、保护数据。
*/

#include <iostream>

using namespace std;

class FA {
    friend class FB;

private:
    int x;

public:
    void display(){
        cout<<x<<endl;
    };
};

class FB{
private:
    FA fa;
public:
    void set(int i);
    void display();
};

void FB::set(int i) {
    fa.x = i;
}

void FB::display() {
    fa.display();
}


#ifndef CPPDEMO_FRIEND_CLASS_H
#define CPPDEMO_FRIEND_CLASS_H

void runFriendClass(){
    FB b ;
    b.set(10);
    b.display();
}

#endif //CPPDEMO_FRIEND_CLASS_H

















