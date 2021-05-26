//
// Created by Admin on 2021/5/26.
//
//有复数类Complex，利用运算符重载实现复数的加、减、乘、除等复数运算。

#include <iostream>
#include <cstring>

using namespace std;

class String{
private:
    int length;
    char *sPtr;
    void setString(const char * s2);
    friend ostream &operator<<(ostream &is,String &s){
        //输出
        return is<< s.sPtr;
    }
    friend istream &operator>>(istream &is,String &s){
        //输入
        return is>>s.sPtr;
    }

public:
    String(const char * str = "");
    const String &operator=(const String &R){
        length = R.length;
        //与demo相反
        strcpy(sPtr,R.sPtr);
        return *this;
    };
    const String &operator+=(const String &r);//链接
    bool operator ==(const String &r);//相等比较
    bool operator !=(const String &r);//不等比较
    bool operator !();//判定是否为空
    bool operator <(const String &r) const;//大小比较
    bool operator >(const String &r) ;
    bool operator >=(const String &r);
    char &operator[](int subscript);//按下标取char
    ~String(){};
};




















