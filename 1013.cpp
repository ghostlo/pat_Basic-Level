//
//  main.cpp
//  15.1013
//
//  Created by time on 18/3/8.
//  Copyright © 2018年 ghostlo. All rights reserved.
//

#include <cmath>
#include <iostream>
using namespace std;

int isPrime(int x){
    bool flag = true;
    if(x<=1){
        flag = false;
    }
    for(int i=2;i<=sqrt(x*1.0);i++){
        if(x%i==0){
            flag = false;
            break;
        }
    }
    return flag;
}

int main(){
    int m,n;
    cin>>m>>n;
    int k=0;
    for(int i=2;i<=100000000;i++)
    {
        if(isPrime(i)){
            k++;
            if(k>=m&&k<=n)
            {
                cout<<i;
                if((k-m+1)%10!=0&&k!=n)
                    cout<<" ";
                if((k-m+1)%10==0)
                    cout<<"\n";
            }
            if(k>n)
                break;
        }
    }
    return 0;
}
