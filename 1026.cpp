#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    long int c1,c2;
    long int a=0;
    cin>>c1>>c2;
    a = (c2-c1)/100;
    cout<<setw(2)<<setfill('0')<<(a/3600)<<":";
    cout<<setw(2)<<setfill('0')<<(a%3600/60)<<":";
    ((c2-c1)%100>=50)? cout<<setw(2)<<setfill('0')<<(a%3600%60+1): cout<<setw(2)<<setfill('0')<<a%3600%60;
    return 0;
}
