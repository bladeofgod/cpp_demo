//
// Created by 45010 on 2021/5/16.
//
/*
 * 联合体 练习
 */

#include <iostream>

using namespace std;

#ifndef CPPDEMO_UNION_PRACTICE_H
#define CPPDEMO_UNION_PRACTICE_H

union myUnion{
    struct {
        int x;int y ;int z;
    } u;
    int k ;
} a;


void runUnion(){
    a.u.x = 4;
    a.u.y = 5;
    a.u.z = 6;
    a.k = 0; //覆盖第一个int 空间值
    printf("%d %d %d %d\n",a.u.x,a.u.y,a.u.z,a.k);
}



#endif //CPPDEMO_UNION_PRACTICE_H
