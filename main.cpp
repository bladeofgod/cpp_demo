#include <iostream>

//#include "day1/print_demo.h"
//#include "day1/leap_year.h"
//#include "day1/union_practice.h"
//#include "day1/power_n.h"
//#include "day1/roll_dice.h"
//#include "day2/enum_demo.h"
//#include "day2/request_pi.h"
//#include "day2/hanoi.h"
//#include "day2/struct_demo.h"
//#include "day2/recursion_1.h"
//#include "day2/recursion_2.h"
//#include "day2/static_var.h"
//#include "day3/swip_num.h"
//#include "day3/inline_demo.h"
//#include "day3/combine_demo.h"
//#include "day3/static_func1.h"
//#include "day3/static_func2.h"
//#include "day3/static_data.h"
//#include "day4/const_object_ref.h"
//#include "day4/const_demo_2.h"
//#include "day4/friend_class.h"
//#include "day4/friend_module.h"
#include "day4/clock.h"
#include "day4/time_reload.h"
#include "day4/time_reload_pp.h"
#include "day5/extends_demo.h"
#include "day5/constructor_invoke_order.h"
#include "day5/construct_order.h"


void day1();
void day2();
void day3();
void day4();
void day5();

int main() {
    std::cout << "Hello, World!" << std::endl;
    //day1();
    //day2();
    //day3();
    //day4();
    day5();


    system("pause");
    return 0;
}

void day5(){

    runConsOrder();
    //showInvokeOrder();
    //runExtendsDemo();
}


void runClock(){
    Clock c(0,0,0);
    c.setTime(10,20,30);
    c.showTime();
    Clock d(c);
    d.showTime();
    d.setTime(90,80,70);
    d.showTime();
}

void day4(){

    //runTimePP();

    //runTimeReload();
    //runClock();
    //runFM();
    //runFriendClass();
    //runConstD2();
    //runConstOR();
}

void day3(){
    //runStaticData();
    //runStaticF2();
    //runStaticF1();
    //runCombineDemo();
    //runInlineDemo();
    //runSwap();
}

void day2(){
    //runEnum();
    //runPiDemo();
    //runHanoiDemo();
    //runStruct();
    //recursion_1();
    //recursion_2();
    //runStatic();

}

void day1(){
    //print_practice();
    //isLeapYear();
    //runUnion();
    //runPowerN();
    //runDiceDemo();
}
