#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int i;
    string a;
    string b;
    string c;
    cin>>i;
    for(int j=0;j<i;j++)
    {
        cin>>b;
        int d=0;
        int e=0;
        int f=0;
        for (int l = 0; l < 50; l++)
        {
            c.append("A");
            if(strncmp(&b[0],&c[0],l)==0)
                d=l;
        }
        b.erase(0,d);
        if (strncmp(&b[0],"P",1)==0)
        {
            b.erase(0,1);
            for (int l = 0; l < 100; l++)
            {
                c.append("A");
                if(strncmp(&b[0],&c[0],l)==0)
                    e=l;
            }
            b.erase(0,e);
            if(strncmp(&b[0],"T",1)==0)
            {
                b.erase(0,1);
                for (int l = 0; l < 100; l++)
                {
                    c.append("A");
                    if(strncmp(&b[0],&c[0],l)==0)
                        f=l;
                }
                if(f==(e*d)&&e!=0)
                    a.append("YES\n");
                else
                    a.append("NO\n");
            }
            else
                a.append("NO\n");
        }
        else
            a.append("NO\n");
    }
    cout<<a;
}
