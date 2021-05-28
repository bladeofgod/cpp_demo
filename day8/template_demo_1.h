//
// Created by Admin on 2021/5/28.
//
//函数模板参数可以是类属参数，也可以包括普通类型的参数

#include <iostream>

using namespace std;

//使用 <typename > 同理
template <class T>
//降序
void sort(T *a,int n){
    for(int i=0;i<n;i++){
        int p=i;
        for(int j=i;j<n;j++){
            if(a[p]<a[j])
                p=j;
        }
        T t = a[i];
        a[i] = a[p];
        a[p] = t;
    }

}

template <class T>
void display(T &a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t"<<endl;
    }
}

void runTemplateDemo1(){
    int a[] = {1,42,23,542,23,42,12};
    char b[] = {'a','c','d','x','g','z'};
    sort(a,7);
    sort(b,6);
    display(a,7);
    display(b,6);
}






















