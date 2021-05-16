//
// Created by 45010 on 2021/5/16.
//
#include <iostream>

using namespace std;

#ifndef CPPDEMO_PRINT_DEMO_H
#define CPPDEMO_PRINT_DEMO_H

int print_practice() {
    int i,j,k,f;
    for(i = 1; i <= 4 ; i++) {
        for (j = 1; j <= 30; j++)
            cout<<" ";
        for(k = 1 ; k <= 8-2*i; k ++)
            cout<<" ";
        for(f = 1; f<= 2*i;f++)
            cout<<"*";
        cout<<endl;
    }

    for( i =1 ;i<=3;i++){
        for(j=1;j<=30;j++)
            cout<<" ";
        for(f=1;f<= 7 -2*i;f++)
            cout<<"*";
        cout<<endl;
    }
    system("pause");
    return 0;
}


#endif //CPPDEMO_PRINT_DEMO_H
