//
// Created by Admin on 2021/5/19.
//

#include <iostream>

using namespace std;

//内联函数会直接将代码替换为所有调用的地方
inline double calArea(double radius);

#ifndef CPPDEMO_INLINE_DEMO_H
#define CPPDEMO_INLINE_DEMO_H

void runInlineDemo(){
    double r(3.0);//初始化
    double area;
    area = calArea(r);
    cout<<area<<endl;

}

inline double calArea(double radius){
    return 3.14*radius*radius;
}


#endif //CPPDEMO_INLINE_DEMO_H
