#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
    char str[10010];
    cin>>str;
    if(str[0]=='-'){
        cout<<"-";
    }
    int pos,i,len=int(strlen(str));
    for(i=0;i<len;i++)
        if(str[i]=='E'){
            pos = i;
            break;
        }
    int exp=0;
    for(i=pos+2;i<len;i++){
        exp = exp*10+(str[i]-'0');
    }
    if(exp==0)
        for(i=0;i<pos;i++)
            cout<<str[i];
    if(str[pos+1]=='-'){
        cout<<"0.";
        for(i=0;i<exp-1;i++)
            cout<<"0";
        for(i=1;i<pos;i++)
            if(str[i]!='.')
                cout<<str[i];
    }
    else
    {
        for(i=1;i<pos;i++){
            if(str[i]!='.')
                printf("%c",str[i]);
            if(i==exp+2 && pos-3!=exp)
                printf(".");
        }
        for(i=0;i<exp-(pos-3);i++)
            printf("0");
    }
    return 0;
}
