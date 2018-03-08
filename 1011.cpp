//
//  main.cpp
//  15.1011
//
//  Created by time on 18/3/8.
//  Copyright © 2018年 ghostlo. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
    {
        long int a, b, c;
        cin>>a>>b>>c;
        if (a + b > c)
            cout<<"Case #"<<i+1<<": true\n";
        else
            cout<<"Case #"<<i+1<<": false\n";
    }
    return 0;
}
