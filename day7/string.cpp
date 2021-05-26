//
// Created by Admin on 2021/5/26.
//

#include "string.h"
#include <iostream>

using namespace std;

const String &String::operator+=(const String &r) {
    char *temp = sPtr;
    length += r.length;
    sPtr = new char[length + 1];
    //将内容复制到新的数组
    strcpy(sPtr,temp);
    //将外部内容赋值到数组后半部分
    strcpy(sPtr,r.sPtr);
    delete[] temp;
    return *this;
}

String::String(const char *str) {
    sPtr = new char [strlen(str) + 1];
    strcpy(sPtr,str);
    length = strlen(str);
}

bool String::operator==(const String &r) {
    return strcmp(sPtr,r.sPtr) == 0;//是否相等
}

bool String::operator!=(const String &r) {
    return !(*this == r);//不等
}

bool String::operator!() {
    return length == 0;//是否为空
}

bool String::operator<(const String &r) const {
    return strcmp(sPtr,r.sPtr) < 0;
}

bool String::operator>(const String &r) {
    return r < *this;
}

bool String::operator>=(const String &r) {
    return !(*this < r);
}

char &String::operator[](int subscript) {
    return sPtr[subscript];
}



























