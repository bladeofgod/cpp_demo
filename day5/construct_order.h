//
// Created by Admin on 2021/5/22.
//

/*
 * 构造顺序
 * 先构造成员
 * 再构造自身（构造函数）
 *
 * 析构则相反
 */

/*
执行结果：
Constructing B
Constructing A
Constructing C
Destructing C
Destructing A
Destructing B
*/

class CCA{
public:
    CCA() { cout<<"Constructing CCA"<<endl;}
    ~CCA(){ cout<<"Destructing CCA"<<endl;}
};

class CCB{
public:
    CCB() { cout<<"Constructing CCB"<<endl;}
    ~CCB(){ cout<<"Destructing CCB"<<endl;}
};

class CCC{
public:
    CCC() { cout<<"Constructing CCC"<<endl;}
    ~CCC(){ cout<<"Destructing CCC"<<endl;}
    CCA cca;
    CCB ccb;
};

void runConsOrder(){
    CCC c;

}



























