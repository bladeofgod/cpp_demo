#include <iostream>

#include "day1/print_demo.h"
#include "day1/leap_year.h"
#include "day1/union_practice.h"
#include "day1/power_n.h"
#include "day1/roll_dice.h"
#include "day2/enum_demo.h"
#include "day2/request_pi.h"
#include "day2/hanoi.h"
#include "day2/struct_demo.h"
#include "day2/recursion_1.h"
#include "day2/recursion_2.h"


void day1();
void day2();

int main() {
    std::cout << "Hello, World!" << std::endl;
    //day1();
    day2();

    system("pause");
    return 0;
}

void day2(){
    //runEnum();
    //runPiDemo();
    //runHanoiDemo();
    //runStruct();
    //recursion_1();
    recursion_2();

}

void day1(){
    //print_practice();
    //isLeapYear();
    //runUnion();
    //runPowerN();
    //runDiceDemo();
}
