//
// Created by 45010 on 2021/5/16.
//
/*
 * 掷骰子
 */

#include <iostream>

using namespace std;

int rollDice();

#ifndef CPPDEMO_ROLL_DICE_H
#define CPPDEMO_ROLL_DICE_H

void runDiceDemo(){
    int flag;
    unsigned seed;
    cout<<"enter a seed"<<endl;
    cin>>seed;
    //用于设置rand()产生随机数的种子
    srand(seed);
    int sum = rollDice();
    int selfdim;
    switch(sum){
        case 7:
        case 11:
            flag = 1;
            break;
        case 2:
        case 3:
        case 12:
            flag = 2;
            break;
        default:
            flag = 0;
            selfdim = sum;
            break;
    }
    while (flag == 0){
        sum = rollDice();
        if(sum == selfdim){
            flag = 1;
        } else if(sum == 7){
            flag = 2;
        }
    }
    if(flag == 1){
        cout<<"player win"<<endl;
    } else {
        cout<<"player lose"<<endl;
    }
}


int rollDice(){
    int sum = 0;
    int dim1 = rand()%6+1;
    int dim2 = rand()%6+1;
    sum = dim1 + dim2;
    cout<<"sum = "<<dim1<<"+"<<dim2<< endl;
    return sum;
}

#endif //CPPDEMO_ROLL_DICE_H
