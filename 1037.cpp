#include <cstdio>
#include <cstdlib>

int main(){
    int a1,a2,a3;
    int b1,b2,b3;
    scanf("%d.%d.%d %d.%d.%d",&b1,&b2,&b3,&a1,&a2,&a3);
    int p,a;
    p = b3+29*b2+17*29*b1;
    a = a3+29*a2+17*29*a1;
    if(a<p) printf("-");
    printf("%d.%d.%d",abs(a-p)/493,abs(a-p)%493/29,abs(a-p)%493%29);
    return 0;
}
