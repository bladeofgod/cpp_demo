//
// Created by 45010 on 2021/5/16.
//

/*
 * x的n次方
 */

#include <iostream>
using namespace std;

double power(double x,int n);

#ifndef CPPDEMO_POWER_N_H
#define CPPDEMO_POWER_N_H


void runPowerN(){
    int x;
    cout<< "enter a int";
    cin>>x;
    int wei = 0;
    int sum = 0;
    int each,chu;
    for(int i=0; i<8;i++){
        each = x%10;
        chu = x/10;
        sum+=each * power(2,wei);
        x = chu;
        wei++;
    }
    cout<< "sum is " << sum << endl;
}

double power(double x,int n){
    double val = 1.0;
    while (n--) {
        val *= x;
    }
    return val;
}

#endif //CPPDEMO_POWER_N_H
