#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
    int n,p;
    scanf("%d%d",&n,&p);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    int i=0,j=0,count=1;
    while(j<n&&i<n)
        if(a[j]<=(long long)a[i]*p){
            count = max(count,j-i+1);
            j++;
        }else i++;
    printf("%d",count);
    return 0;
}
