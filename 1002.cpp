#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    string i;
    string str;
    char ch[100];
    string str1[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int k=0;
    std::cin >> i;
    while(i[0]!='\0')
    {
        k=k+i[0]-48;
        i.erase(0,1);
    }
    sprintf(ch,"%d",k);
    str=ch;
    while(str[0]!='\0')
    {
        cout<<str1[str[0]-48];
        if(str[1]!='\0')
            cout<<" ";
        str.erase(0,1);
    }
    return 0;
}
