#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int grade[101] = {0};
    int i;
    int temp;
    for(i=0;i<n;i++){
        scanf("%d",&temp);
        grade[temp]++;
    }
    int k;
    cin>>k;
    getchar();
    for(i=0;i<k;i++){
        scanf("%d",&temp);
        if(i==0) printf("%d",grade[temp]);
        else printf(" %d",grade[temp]);
    }
    return 0;
}
