//
//  main.cpp
//  11.1006
//
//  Created by time on 18/3/8.
//  Copyright © 2018年 ghostlo. All rights reserved.
//

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int i,a,b,c;
    string stra;
    cin>>i;
    a=i/100;
    b=i%100/10;
    c=i%10;
    
    for(int k=0;k<a;k++)
        stra.append("B");
    for(int k=0;k<b;k++)
        stra.append("S");
    cout<<stra;
    for(int k=1;k<c+1;k++)
        cout<<k;
}
