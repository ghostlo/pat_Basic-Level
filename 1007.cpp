//
//  main.cpp
//  12.1007
//
//  Created by time on 18/3/8.
//  Copyright © 2018年 ghostlo. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int i,z=0;
    cin>>i;
    for(int j=2;j<i+1;j++)
    {
        bool a=true;
        for(int k=2;k<=sqrt(j*1.0);k++)
            if(j%k==0)
            {
                a=false;
                break;
            }
        if(a)
        {
            if(j+2>i)
                break;
            int m=j+2;
            bool b=true;
            for(int k=2;k<=sqrt(m*1.0);k++)
            {
                if(k==m) k++;
                if(m%k==0)
                {
                    b=false;
                    break;
                }
            }
            if(b) z++;
        }
    }
    cout<<z;
}
