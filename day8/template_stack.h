//
// Created by Admin on 2021/5/28.
//
/*
设计一个堆栈的类模板Stack，在模板中用类型参数T表示栈中存放的数据，用非类型参数MAXSIZE代表栈的大小。
*/

#include <iostream>

using namespace std;

template<typename T,int MAXSIZE>
class Stack{
private:
    T elem[MAXSIZE];
    int top;
public:
    Stack(){top = 0;};
    void push(T e);
    T pop();
    bool empty(){
        if(top<=-1){
            return 1;
        } else {
            return 0;
        }
    }
    void setEmpty(){
        top = -1;
    }
    bool full(){
        if(top>=MAXSIZE - 1){
            return 1;
        }else {
            return 0;
        }
    }
};
/*
原型：
template <模板参数列表>
返回值类型 类模板名<模板参数名表>::成员函数名 (参数列表){};
*/

template<typename T,int MAXSIZE>
void Stack<T,MAXSIZE>::push(T e) {
    if(full()){
        cout<<"stack was full!"<<endl;
        return;
    }
    elem[++top] = e;
}

template<typename T,int MAXSIZE>
T Stack<T,MAXSIZE>::pop() {
    if(empty()){
        cout<<"stack wast empty!"<<endl;
        return 0;
    }
    return elem[top--];
}


void runTemplateStack(){
    Stack<int,10> iStack;
    Stack<char,10> cStack;
    iStack.setEmpty();
    cStack.setEmpty();
    cout<<"----int stack ---" <<endl;
    int i;
    for(int i=1;i<11;i++){
        iStack.push(i);
    }
    for(int i=1;i<11;i++){
        cout<<iStack.pop()<<"\t";
    }
    cout<<"\n\n------char stack-----"<<endl;
    cStack.push('a');
    cStack.push('b');
    cStack.push('c');
    cStack.push('d');
    cStack.push('e');
    cStack.push('f');
    for(int i=1;i<7;i++){
        cout<<cStack.pop()<<"\t";
    }
    cout<<endl;

}


























