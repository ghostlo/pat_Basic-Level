//不宜劳累写程序

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int i;
    string f;
    cin>>i;
    int d[3*i];
    string str[100000];
    for(int a=0;a<3*i;a++)
    {
        cin>>f;
        str[a]=f;
    }

    for(int b=2;b<3*i;b=b+3)
    {
        
        int c=0;
        for(;str[b][c]!='\0';c++)
            continue;
//        cout<<c<<endl;
        if(c==1)
            d[b]=str[b][0]-48;
        else if (c==2)
            d[b]=(str[b][0]-48)*10+(str[b][1]-48);
        else if (c==3)
            d[b]=(str[b][0]-48)*100+(str[b][1]-48)*10+(str[b][2]-48);
        else
            continue;
        
//        cout<<d[b]<<endl;
    }

    int high=2;
    int low=2;
    for(int a=2;a<3*i;a=a+3)
    {
//        cout<<d[a]<<d[high]<<d[low]<<endl;

        if(d[a]<d[low])
            low=a;
        if(d[high]<d[a])
            high=a;
    }
    cout<<str[high-2]<<" "<<str[high-1]<<"\n"<<str[low-2]<<" "<<str[low-1]<<endl;
}
