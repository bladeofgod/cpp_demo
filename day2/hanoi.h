//
// Created by Admin on 2021/5/18.
//

#include <iostream>
using namespace std;

///移动盘子
void move(char A,char B);

void hanoi(int n ,char A,char B,char C);

#ifndef CPPDEMO_HANOI_H
#define CPPDEMO_HANOI_H

void runHanoiDemo(){
    cout<<"输入盘子数目"<<endl;
    int disks;
    cin>>disks;
    hanoi(disks,'A','B','C');
}

void move(char A,char B){
    cout<<A<<" -> "<<B<<endl;
}

void hanoi(int n,char A,char B,char C){
    if(n==1){
        move(A,C);
    }else{
        hanoi(n-1,A,C,B);
        move(A,C);
        hanoi(n-1,B,A,C);
    }
}

#endif //CPPDEMO_HANOI_H
