//
// Created by Admin on 2021/5/22.
//

/*
某公司有经理、销售员、小时工等多类人员。经理按周计算薪金；销售员每月底薪800元，
然后加销售提成，每销售1件产品提取销售利润的5%；小时工按小时计算薪金。每类人员都有姓名和身份证号等数据。
为简化问题，把各类人员的共有信息抽象成基类Employee，其他人员则继承该类的功能。
*/


#include <iostream>
#include <string>
#include "employee.h"

using namespace std;

void runDay6Demo(){
    cout<<"请输入工作周:";
    int week;
    cin>>week;
    Manager m("小王","11111",week);
    m.print();
    cout<<"请输入单件利润：";
    int profit;
    cin>>profit;
    cout<<"请输入销售件数：";
    int count;
    cin>>count;
    SaleWorker sw("小黑","22222",profit,count);
    sw.print();
    cout<<"请输入工作小时：";
    int hour;
    cin>>hour;
    HourWorker hw("小红","33333",hour);
    hw.print();


}


















