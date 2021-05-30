//
// Created by 45010 on 2021/5/30.
//
#include <iostream>
#include <iomanip>
#include <fstream>
//向量是一个能够存放任意类型的动态数组
#include <vector>
#include <cstring>

using namespace std;

class Person{
private:
    char name[20];
    char id[18];
    int age;
    char addr[20];
public:
    Person(){};
    Person(char *n,char * pid, int a,char *add){
        strcpy(name,n);
        strcpy(id,pid);
        strcpy(addr,add);
        age = a;
    }
    void display(){
        cout<<name<<"\t"<<id<<"\t"<<age<<"\t"<<addr<<endl;
    }
};

void rundemo12(){
    vector<Person> v;
    //声明一个迭代器，来访问vector容器，作用：遍历或者指向vector容器的元素
    vector<Person>::iterator pos;
    char ch;
    ofstream out("g:/person.dat",ios::out|ios::binary);
    char name[20],id[18],addr[20];
    int age;
    cout<<"-----input person profile----"<<endl;
    do{
        cout<<"name :";
        cin>>name;
        cout<<"id :";
        cin>>id;
        cout<<"age :";
        cin>>age;
        cout<<"address :";
        cin>>addr;
        Person per(name,id,age,addr);
        out.write((char*)&per,sizeof (per));
        cout<<"enter another person(y/n)?";
        cin>>ch;
    } while (ch=='y');
    out.close();
    ifstream in("g:/person.dat",ios::in|ios::binary);
    Person s;
    in.read((char *)&s,sizeof (s));
    while(!(in.eof())){
        v.push_back(s);
        in.read((char*)&s,sizeof (s));
    }
    cout<<endl;
    cout<<"------read data from file-----"<<endl<<endl;
    pos = v.begin();
    for(pos =v.begin(); pos != v.end();pos++){
        (*pos).display();
    }
}





void run12104(){
    char c[30] = "this is string";
    double d = -1231.232;
    cout.width(30);
    cout.fill('*');
    cout.setf(ios::left);
    cout<<c<<"---l1"<<endl;
    cout.width(30);
    cout.fill('-');
    cout.setf(ios::right);
    cout<<c<<"---l2"<<endl;
    cout.setf(ios::dec|ios::showbase|ios::showpoint);
    cout.width(30);
    cout<<d<<"---l3"<<endl;
    cout.setf(ios::showpoint);
    cout.precision(10);
    cout.width(30);
    cout<<d<<"---l4"<<endl;
    cout.width(30);
    cout.setf(ios::oct,ios::basefield);
    cout<<100<<"---l5"<<endl;
}

class FE{
private:
    int number,age;
    char name[20];
    double sal;
public:
    FE(){}
    FE(int num,char *name,int age,double salary){
        number = num;
        this->age = age;
        strcpy(this->name,name);
        sal = salary;
    }
    void display(){
        cout<<number<<"\t"<<name<<"\t"<<age<<"\t"<<sal<<endl;
    }
};

void rundemo129(){
    ofstream out("g:/ept.txt",ios::out);//定义随机输出文件
    FE e1(1,"tom",32,2322);
    FE e2(2,"jerry",22,3322);
    FE e3(3,"bom",42,5342);
    FE e4(4,"bob",52,4322);
    FE e5(5,"jack",32,6322);
    FE e6(6,"helen",25,3322);
    //按e1,e2,e3,e4顺序写入文件
    //将  &e1 转为 char 指针
    out.write((char *)&e1,sizeof (e1));
    out.write((char *)&e2,sizeof (e2));
    out.write((char *)&e3,sizeof (e3));
    out.write((char *)&e4,sizeof (e4));
    out.write((char *)&e5,sizeof (e5));
    out.write((char *)&e6,sizeof (e6));

    FE e7(3,"bom",42,9999);
    out.seekp(3* sizeof (e1));//调整指针位置到第3个
    out.write((char *)&e7,sizeof (e7));
    out.close();

}




void rundemo127(){
    char ch;
    ofstream out("/test.dat",ios::out|ios::binary);
    for(int i=0;i<90;i++){
        if(i > 0 && (i%30) == 0){
            out.put('\n');
        }
        out.put(i);
        out.put(' ');
    }
    out.close();
    ifstream in("/test.dat",ios::in|ios::binary);
    while(in.get(ch)){
        cout<<ch;
    }
    in.close();
}

void rundemo126(){
    fstream ioFile;
    ioFile.open("./a.dat",ios::out);
    ioFile<<"tom"<<" "<<76<<" "<<98<<" "<<67<<endl;
    ioFile<<"jack"<<" "<<76<<" "<<98<<" "<<67<<endl;
    ioFile<<"bob"<<" "<<76<<" "<<98<<" "<<67<<endl;
    ioFile<<"jerry"<<" "<<76<<" "<<98<<" "<<67<<endl;
    ioFile<<"alice"<<" "<<76<<" "<<98<<" "<<67<<endl;
    ioFile<<"helen"<<" "<<76<<" "<<98<<" "<<67<<endl;
    ioFile.close();
    ioFile.open("./a.dat",ios::in|ios::binary);
    char name[10];
    int c,m,com;
    cout<<"name \t"<<"c\t"<<"m\t"<<"com\t"<<"sum "<<endl;
    ioFile>>name;
    while(!ioFile.eof()){
        //文件内读取 内容到 c,m,com;
        ioFile>>c>>m>>com;
        cout<<name<<"\t"<<c<<"\t"<<m<<"\t"<<com<<"\t"<<c+m+com<<endl;
        ioFile>>name;
    }
    ioFile.close();

}

void rundemo125(){
    char c[30] = "this is string";
    double d = -1234.45678;
    //设置字符宽度，不满的 右侧填充 *
    cout<<setw(30)<<left<<setfill('*')<<c<<"----l1"<<endl;
    cout<<setw(30)<<right<<setfill('*')<<c<<"-----l2"<<endl;
    //showbase 显示基数前缀 (上面的 right 会影响)
    cout<<dec<<showbase<<showpoint<<setw(30)<<d<<"-----l3"<<endl;
    //show point 显示小数点
    cout<<setw(30)<<showpoint<<setprecision(10)<<d<<"-------l4"<<endl;
    //set base(8)设置为8进制
    cout<<setw(30)<<setbase(8)<<100<<"-------l5"<<endl;
}


void rundemo123(){
    char c;
    char a[50] = "this is a string...";
    while((c = cin.get())!= '\n'){
        cout.put(c);
        cout.put('\n');
        //向输出流输入字符
        cout.put('t').put('h').put('i').put('s').put('\n');
        //类似get，向输出流 截取 数组a的12个字符
        cout.write(a,12).put('\n');
        //输出
        cout<<"look"<<"\t here!"<<endl;
    }
}

void rundemo122(){
    char stu[5][10];
    int i;
    for(i=0;i<5;i++){
        cin.getline(stu[i],10,',');
    }
    for(i=0;i<5;i++){
        cout<<stu[i]<<endl;
    }
}


















