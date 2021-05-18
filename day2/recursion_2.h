//
// Created by Admin on 2021/5/18.
//

#include <iostream>

using namespace std;

int f(int n,int k);

#ifndef CPPDEMO_RECURSION_2_H
#define CPPDEMO_RECURSION_2_H

void recursion_2(){
    int n,k;
    cout<<"input n"<<endl;
    cin>>n;
    cout<<"input k"<<endl;
    cin>>k;
    cout<<f(n,k)<<endl;
}
int f(int n,int k){
    if((n==k) || (k==0)) {
        return 1;
    }else {
        return f(n-1,k-1) + f(n-1,k);
    }
}

#endif //CPPDEMO_RECURSION_2_H
