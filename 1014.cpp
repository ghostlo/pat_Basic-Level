//
//  main.cpp
//  15.1014
//
//  Created by time on 18/3/9.
//  Copyright © 2018年 ghostlo. All rights reserved.
//


#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main(){
    char str[4][70];
    cin>>str[0];
    cin>>str[1];
    cin>>str[2];
    cin>>str[3];
    char week[7][4] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
    int i;
    for(i=0;i<strlen(str[0])&&i<strlen(str[1]);i++)
        //第一个条件：A-G
        if(str[0][i]==str[1][i]&&(str[0][i]>='A'&&str[0][i]<='G')){
            printf("%s ",week[str[0][i]-65]);
            break;
        }
    //i从i+1开始
    for(i=i+1;i<strlen(str[0])&&i<strlen(str[1]);i++)
        if(str[0][i]==str[1][i])
        {
            //第二个条件：0-9或者A-N
            if(str[0][i]>='A'&&str[0][i]<='N')
            {
                printf("%02d:",str[0][i]-'A'+10);
                break;//break必须放到这里，找到就跳出循环，不然会有错误
            }
            else if(str[0][i]>='0'&&str[0][i]<='9')
            {
                printf("%02d:",str[0][i]-'0');
                break;//break必须放到这里，找到就跳出循环，不然会有错误
            }
        }
    for(i=0;i<strlen(str[2])&&i<strlen(str[3]);i++)
        if(str[2][i]==str[3][i])
            if((str[2][i]>='A'&&str[2][i]<='Z')||(str[2][i]>='a'&&str[2][i]<='z'))
            {
                printf("%02d",i);
                break;	
            }
    
    return 0;
}
