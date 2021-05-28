//
// Created by Admin on 2021/5/28.
//

#include <iostream>
#include <string>
#include <map>

using namespace std;

void runMapSe(){
    string name[]={"tom","jack","jerry"};
    double salary[] = {1200,2300,3200};
    map<string,double> sal;
    map<string,double>::iterator p;
    for(int i=0;i<3;i++){
        //make_pair 可以将任意两个值 组装成一对， 无参数限制
        // map 中有用到
        sal.insert(make_pair(name[i],salary[i]));
    }
    sal["marry"] = 3223;
    sal["bob"] = 1234;
    for(p = sal.begin();p != sal.end();p++) {
        //指针++ 会按照固定长度 移动
        cout<<p->first<<"\t"<<p->second<<endl;
    }

    string person;
    cout<<"please input ppl's name for find:";
    cin>>person;
    int flag = 1;
    for(p = sal.begin();p!=sal.end();p++){
        if(p->first == person){
            //输出 指定人员的薪水
            cout<<p->second<<endl;
            flag = 0;
        }
    }
    if(flag){
        cout<<"didn't find any one"<<endl;
    }

    cout<<"please input name for delete";
    cin>>person;
    map<string,double>::iterator it;
    it = sal.find(person);//按key查找
    if(it != sal.end()){
        cout<<"success "<<(*it).first<<":"<<(*it).second<<endl;
        sal.erase(it);
        cout<<"delete success"<<endl;
    }
    cout<<"result after delete :"<<endl;
    for(p=sal.begin();p!=sal.end();p++){
        cout<<p->first<<"\t"<<p->second<<endl;
    }


}




















