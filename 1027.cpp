#include <iostream>
using namespace std;
int main()
{
    int n,m;
    char a;
    cin>>n>>a;
    for(m = 0; 2*m*m-1 <= n; ++m);
    m -= 1;
    for(int i = m; i > 0; --i) {
        int cnt = 2 * i - 1;
        for(int j = 0; j < (m-i); ++j)
            cout<<" ";
        for(int j = 0; j < cnt; ++j)
            cout<<a;
        cout<<"\n";
    }
    for(int i = 2; i <= m; ++i) {
        int cnt = 2 * i - 1;
        for(int j = 0; j < (m-i); ++j)
            cout<<" ";
        for(int j = 0; j < cnt; ++j)
            cout<<a;
        cout<<"\n";
    }
    cout<<(n-2*m*m+1)<<"\n";
    return 0;
}
