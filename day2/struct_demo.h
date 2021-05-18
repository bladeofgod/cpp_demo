//
// Created by Admin on 2021/5/18.
//

/*
 *       先介绍一个相关的概念——偏移量。偏移量指的是结构体变量中成员的地址和结构体变量地址的差。结构体大小等于最后一个成员的偏移量加上最后一个成员的大小。显然，结构体变量中第一个成员的地址就是结构体变量的首地址。因此，第一个成员i的偏移量为0。第二个成员c的偏移量是第一个成员的偏移量加上第一个成员的大小（0+4）,其值为4；第三个成员j的偏移量是第二个成员的偏移量加上第二个成员的大小（4+1）,其值为5。

      然而，在实际中，存储变量时地址要求对齐，编译器在编译程序时会遵循两条原则：

      （1）结构体变量中成员的偏移量必须是成员大小的整数倍（0被认为是任何数的整数倍）

      （2）结构体大小必须是所有成员大小的整数倍，也即所有成员大小的公倍数。
 */

#include <iostream>

using namespace std;

struct student{
    int num;
    char name[20];
    char gender;
};


#ifndef CPPDEMO_STRUCT_DEMO_H
#define CPPDEMO_STRUCT_DEMO_H

void runStruct(){
    student s = {12,"abc",'M'};
    cout<<s.num<<endl;
    cout<< sizeof(s.num)<<endl;
    cout<< sizeof(s.name)<<endl;
    cout<< sizeof(s.gender)<<endl;
    cout<< sizeof(s)<<endl;
}


#endif //CPPDEMO_STRUCT_DEMO_H
