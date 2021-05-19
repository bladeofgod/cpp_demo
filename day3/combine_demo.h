//
// Created by Admin on 2021/5/19.
//

#include <iostream>
#include "Circle.h"

using namespace std;

/*
一圆型游泳池如图所示，现在需在其周围建一圆型过道，并在其四周围上栅栏。栅栏价格为35元/米，过道造价为20元/平方米。
过道宽度为3米，游泳池半径由键盘输入。要求编程计算并输出过道和栅栏的造价。
图形描述：大圆嵌套小圆：
小圆在大圆中间，小圆为游泳池，大圆与小圆间隔为过道。
*/

//计算过道造价
const float aisle = 20.0;
float calAislePrice(float area);
//计算栅栏造价
const float lenPrice = 35.0;
float calPalingPrice(float len);


#ifndef CPPDEMO_COMBINE_DEMO_H
#define CPPDEMO_COMBINE_DEMO_H

void runCombineDemo(){
    float r;
    cout<<"enter radius of pool"<<endl;
    cin>>r;
    Circle bigC(r+3);
    Circle poolC(r);
    cout<<bigC.area()<<"---"<<poolC.area()<<endl;
    float ap = calAislePrice((bigC.area() - poolC.area()));
    float lp = calPalingPrice(bigC.sideLen());
    cout<<"aisle total price  "<<ap<< endl;
    cout<<"fency total price  "<<lp<<endl;
}

float calAislePrice(float area){
    return area * aisle;
}

float calPalingPrice(float len){
    return len * lenPrice;
}

#endif //CPPDEMO_COMBINE_DEMO_H
