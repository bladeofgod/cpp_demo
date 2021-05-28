//
// Created by Admin on 2021/5/28.
//

//设计一通用数组类，它能够直接存取数组元素，并能够对数组进行从大到小的排序。

#include <iostream>
#include <cstring>

using namespace std;
const int size = 5;
template<typename T>
class Array{
private:
    T a[size];
public:
    Array(){
        for(int i=0;i<size;i++){
            a[i] = 0;
        }
    }
    T &operator[](int i);
    void sort();
};

template<typename T>
T& Array<T>::operator[](int i) {
    if(i<0||i>size -1){
        cout<<"\n 数组下表越界"<<endl;
        exit(1);
    }
    return a[i];
}

template<typename T>
void Array<T>::sort() {
    int p;
    for(int i=0;i<size-1;i++){
        p = i;
        for(int j=i;j<size;j++){
            if(a[p]<a[j])
                p=j;
        }
        T t = a[p];
        a[p] = a[i];
        a[i] = t;
    }
}

template<>
void Array<char *>::sort() {
    int p;
    for(int i=0;i<size-1;i++){
        p = i;
        for(int j=i;j<size;j++){
            if(strcmp(a[p],a[j]) <0)
                p =j;
        }
        char *t = a[p];
        a[p] = a[i];
        a[i] = t;
    }
}

void runTemplateClass(){
    Array<int> a1;
    Array<char*> b1;
    a1[0]=1;
    a1[1]=23;
    a1[2]=6;
    a1[3]=3;
    a1[4]=9;
    a1.sort();
    for(int i=0;i<5;i++){
        cout<<a1[i]<<"\t";
    }
    cout<<endl;
    b1[0]="x1";
    b1[1]="as";
    b1[2]="dg";
    b1[3]="53";
    b1[4]="kj";
    b1.sort();
    for(int i=0;i<5;i++)
        cout<<b1[i]<<"\t";
    cout<<endl;


}






















