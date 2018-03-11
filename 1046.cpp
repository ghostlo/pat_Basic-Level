#include <iostream>
using namespace std;
int main()
{
    int n;
    int loseA = 0, loseB = 0;
    cin>>n;
    for(int i = 0; i < n; ++i) {
        int hanA, huaA, hanB, huaB;
        cin>>hanA>>huaA>>hanB>>huaB;
        if (huaA != huaB){
            if ((hanA+hanB) == huaA) loseB++;
            else if ((hanA+hanB) == huaB) loseA++;}
    }
    cout<< loseA<<" "<<loseB<<endl;
    return 0;
}
