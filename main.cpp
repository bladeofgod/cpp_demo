#include <iostream>
//#include "day6/day6_demo.h"
//#include "day7/reload_().h"
//#include "day7/reload_=.h"
//#include "day7/reload_()_[]_example.h"
//#include "day7/reload_[].h"
#include "day7/custom_time.h"
#include "day7/counter.h"

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
//#include "day4/clock.h"
//#include "day4/time_reload.h"
//#include "day4/time_reload_pp.h"
//#include "day5/extends_demo.h"
//#include "day5/constructor_invoke_order.h"
//#include "day5/construct_order.h"
//#include "day5/no_cons_child_class.h"
//#include "day5/child_constructor.h"
//#include "day5/child_cons_invo_order.h"
//#include "day5/child_to_parent.h"
//#include "day6/abstract_class.h"
//#include "day6/virtual_demo.h"
//#include "day6/virtual_decons.h"
//#include "day6/virtual_f_attr.h"
//#include "day6/virtual_f_demo.h"
#include "day7/reload_complex.h"
#include "day7/string.h"
#include "day8/map_se.h"
#include "day8/template_demo_1.h"
#include "day8/special_template.h"
#include "day8/template_class.h"
#include "day8/template_stack.h"
#include "day9/e_demo_1.h"
#include "day10/get12.h"
#include "day10/get121.h"
#include "day10/get122.h"
#include "day10/demo12.h"


void day1();
void day2();
void day3();
void day4();
void day5();
void day6();
void day7();
void day8();
void day9();
void day10();

int main() {
    std::cout << "Hello, World!" << std::endl;
    //day1();
    //day2();
    //day3();
    //day4();
    //day5();
    //day6();
    //day7();
    //day8();
    //day9();
    day10();

    system("pause");
    return 0;
}

void day10(){


    rundemo12();
    //run12104();
    //rundemo129();
    //rundemo127();
    //rundemo126();
    //rundemo125();
    //rundemo123();
    //rundemo122();
    //runget122();
    //runGet121();
    //runget12();
}

void day9(){


    runFileE();
    //runStackE();
    //runE71();
    //runE7();
    //runE6();
    //runE5();
    //runE2();
    //runE1();
}

void day8(){

    runTemplateStack();
    //runTemplateClass();
    //runSpecialTemplate();
    //runTemplateDemo1();
    //runMapSe();
}

void runCustomTimeDemo(){
    CustomTime t1(23,59,59);
    t1.display();
    ++t1;//隐式调用  (operator)
    t1.display();
    t1.operator++();//显示调用
    CustomTime t2(24,60,60);
    t2.display();
    ++t2;
    t2.display();
    --t2;
    t2.display();

}

void runCounterDemo(){
    Counter a;
    ++a;
    a.display();
    a++;
    a.display();
    --a;
    a.display();
    a--;
    a.display();
}

void runReloadComplex(){
    Complex c1(1,2),c2(3,4),c3,c4,c5,c6;
    Complex a,b(2,3);
    a = b+2;
    a.display();
    c3 = c1+c2;
    c4 = c1-c2;
    c5 = c1*c2;
    c6 = c1/c2;
    c1.display();
    c2.display();
    c3.display();
    c4.display();
    c5.display();
    c6.display();
}

void runStringDemo(){
    String s1("happy"),s2("new year"),s3;
    cout << "s1 is"<<s1<<"\n s2 is "<<s2<<"\b s3 is"<<s3<<"\n"
        << "\n compare s2 and s1 :"
        <<"\n result of s2 == 1 is :" <<(s2 == s1 ? "true" : "false")
        <<"\n result of s2 != s1 is :"<<(s2 != s1 ? "true":"false")
        <<"\n result of s2 > s1 is :"<<(s2 > s1 ? "true":"false")
        <<"\n result of s2 < s1 is :"<<(s2 < s1 ? "true":"false")
        <<"\n result of s2 >= s1 is :"<<(s2 >= s1 ? "true":"false");
        cout << "\n\n 测试s3 是否为空:";
    if(!s3){
        cout<<"s3 is empty string"<<endl;
        cout<<"s3 = s1 :";
        s3 = s1;
        cout<<"s3 ="<<s3<<"\n";
    }
    cout<<"s1 += s2 result : s1 = ";
    s1 +=s2;
    cout<<s1;

    cout<<"\n s1+= to you ,the result is :";
    s1 +="to you";
    cout << "s1 = "<<s1<<endl;
    s1[0]= 'h';
    s1[6] = 'n';
    s1[10] = 'y';
    cout<<"s1 = "<<s1<<"\n";
}


void day7(){

    runStringDemo();
    //runReloadComplex();
    //runCounterDemo();
    //runCustomTimeDemo();
    //runReloadExamp();
    //runReloadExample();
    //runReloadEqual();
    //runReloadBrackets();
}


void day6(){



    //runDay6Demo();

}

void day5(){

    //runVFDdemo();
    //runVFaDemo();
    //runVDdemo();
    //runVirtualDemo();
    //runACdemo();
    //runPassParam();
    //runChildConsIO();
    //runChildCons();
    //runNoCons();
    //runConsOrder();
    //showInvokeOrder();
    //runExtendsDemo();
}


//void runClock(){
//    Clock c(0,0,0);
//    c.setTime(10,20,30);
//    c.showTime();
//    Clock d(c);
//    d.showTime();
//    d.setTime(90,80,70);
//    d.showTime();
//}

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
