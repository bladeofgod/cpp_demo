//
// Created by 45010 on 2021/5/30.
//

#include <iostream>

using namespace std;

/*
（1）cin.getline(arrayname,size)与cin.get(arrayname,size)的区别
cin.get(arrayname,size)当遇到[enter]时会结束目前输入，他不会删除缓冲区中的[enter]
cin.getline(arrayname,size)当遇到[enter]时会结束当前输入，但是会删除缓冲区中的[enter]
*/

void runget122(){
    /*
char a[10];
char b;
cin.get(a,10);
cin.get(b);
cout<<a<<endl<<int(b);//输入：12345[enter] 输出：12345 【换行】 10*/
    /*char c[10];
    char d;
    cin.getline(c,10);
    cin.get(d);
	cout<<c<<endl<<int(d);//输入：12345[enter]a[enter] 输出：12345【换行】97*/
    //cin.getline(arrayname,size,s)与cin.gei(arrayname,size,s)的区别
    /*
    cin.getline(arrayname,size,s)当遇到s时会结束输入，并把s从缓冲区中删除
    cin.get（arrayname,size,s）当遇到s时会结束输入，但不会删除缓冲区中的s
    */

    char e1[10];
    char f1;
    //get 和 getline 功能基本一致，只是缓冲区多余字符，getline会删除
    //cin.get(e1,10,',');
    cin.getline(e1,10,',');
    cin.get(f1);
    cout<<e1<<endl<<f1;
 }

















