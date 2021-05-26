//
// Created by Admin on 2021/5/26.
//

#include <iostream>
#include "reload_complex.h"

using namespace std;

Complex Complex::operator+(Complex b) {
    return Complex(r+b.r,i+b.i);
}

Complex Complex::operator-(Complex b) {
    return Complex(r-b.r,i-b.i);
}

Complex Complex::operator*(Complex b) {
    return Complex(r*b.r,i*b.i);
}

Complex Complex::operator/(Complex b) {
    return Complex(r/b.r,i/b.i);
}

void Complex::display() {
    cout<<r;
    if(i> 0) cout<<"+";
    if(i!= 0)cout<<i<<"i"<<endl;
}














