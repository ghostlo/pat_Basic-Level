//
//  main.cpp
//  15.1012
//
//  Created by time on 18/3/8.
//  Copyright © 2018年 ghostlo. All rights reserved.
//
#include <iostream>
using namespace std;
int main()
{
    int a[5]={0};
    int z[5]={0};
    int m = 1;
    int N;
    cin>>N;
    for(int i = 0; i < N; ++i)
    {
        int n;
        cin>>n;
        switch(n % 5) {
            case 0:
                if (n % 2 == 0)
                {
                    a[0] += n;
                    z[0]++;
                }
                break;
            case 1:
                a[1] += m*n;
                m*= -1;
                z[1]++;break;
            case 2:
                a[2] += 1;
                z[2]++;
                break;
            case 3:
                a[3] += n;
                z[3]++;
                break;
            case 4:
                a[4] = (n > a[4]? n : a[4]);
                z[4]++;
                break;
            default:
                break;
        }
    }
    for(int i = 0; i < 4; ++i)
    {
        if (!z[i]) cout<<"N ";
        else if (i == 3) printf("%.1f ", float(a[i])/float(z[3]));
        else cout<<a[i]<<" ";
        
    }
    if (!z[4])
        cout<<"N\n";
    else
        cout<<a[4]<<"\n";
    return 0;
}
