#include <iostream>
using namespace std;
int main()
{
    int a[10];
    for(int k=0;k<10;k++)
        cin>>a[k];
    int i,j;
    //first output min number expect 0
    for(i=1;i<=9;i++)
        if(a[i]!=0){
            cout<<i;
            a[i]=a[i]-1;
            break;
        }
    //then output the sequence from 0 to 9
    for(i=0;i<=9;i++)
        if(a[i]!=0)
            for(j=0;j<a[i];j++)
                cout<<i;
    return 0;
}
