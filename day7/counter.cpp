//
// Created by Admin on 2021/5/26.
//
#include <iostream>
#include "counter.h"

using namespace std;

Counter Counter::operator++() {
    ++n;
    return *this;
}

Counter Counter::operator++(int) {
    n++;
    return *this;
}

Counter operator--(Counter &c){
    --c.n;
    return c;
}
Counter operator--(Counter &c,int){
    c.n--;
    return c;
}

void Counter::display() {
    cout<<"counter number ="<<n<<endl;
}































