//
//  main.cpp
//  10.1005_1
//
//  Created by time on 18/3/7.
//  Copyright © 2018年 ghostlo. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int input;
    int inp[1000];
    int out[1000];
    cin>>input;
    for(int i=0;i<input;i++)
        cin>>inp[i];
    for(int i=0;i<input;i++)
    {

        int n=inp[i];
        while(n!=1&&n!=0)
        {
            if(n%2==1)
            {
                n=(3*n+1)/2;
                for(int k=0;k<input;k++)
                    if(n==inp[k])
                        inp[k]=0;
            }
            else
            {
                n=n/2;
                for(int k=0;k<input;k++)
                    if(n==inp[k])
                        inp[k]=0;
            }
        }
    }
    int m = 0;
    for(int i=0,j=0;i<input;i++)
    {
        if(inp[i]!=0)
        {
            out[j]=inp[i];
            j++;
        }
        m=j;
    }
//    cout<< m<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=1,jj=0;j<m;j++)
        {
            if(out[j]>out[j-1])
            {
                jj=out[j];
                out[j]=out[j-1];
                out[j-1]=jj;
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        if(i!=m-1)
            cout<<out[i]<<" ";
        else
            cout<<out[i];
    }
}
