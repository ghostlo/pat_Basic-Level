//
//  main.cpp
//  13.1008
//
//  Created by time on 18/3/8.
//  Copyright © 2018年 ghostlo. All rights reserved.
//

#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int a[n];
    int b[n];
    int n,m;
    cin>>n;
    cin.get();
    cin>>m;
    cin.get();
    m = m%n;
    memset(b,0,sizeof(b));
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        cin.get();
    }
    for(i=0;i<n;i++) b[(i+m)%n] = a[i];
    for(i=0;i<n;i++)
    {
        if(i>0){
            cout<<" ";
        }
        cout<<b[i];
    }
    return 0;
}
