//
// Created by Admin on 2021/5/26.
//
//有复数类Complex，利用运算符重载实现复数的加、减、乘、除等复数运算。

class Complex{
private:
    double r,i;
public:
    Complex(double rr = 0,double ii=0):r(rr),i(ii){}
    Complex operator+(Complex b);
    Complex operator-(Complex b);
    Complex operator*(Complex b);
    Complex operator/(Complex b);
    void display();
};

















