#include <cstdio>
#include <cmath>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	double max = 0;
	while(n--){
		int a,b;
		scanf("%d%d",&a,&b);
		double m = sqrt(a*a+b*b);
		max = m > max ? m : max;
	}
	printf("%.2lf",max);
	return 0;
}
