#include <cstdio>
char str[100001];
int A[100001];
int main()
{
    int i;
    int j = 0;
    scanf("%s", str);
    for(i = 0; str[i] && str[i] != 'A'; ++i);
    int fa = i;
    for(i++; str[i]; ++i)
        if (str[i] == 'T') A[fa]++;
    int tmpT = 0;
    for(i = fa+1; str[i]; ++i) {
        if (str[i] == 'T') tmpT++;
        if (str[i] == 'A') A[i] = A[fa] - tmpT;
    }
    for(i = 0; str[i] && str[i] != 'P'; ++i);
    int fP = i;
    int fp = 0;
    for(i++; str[i]; ++i)
        if (str[i] == 'A') fp = (fp + A[i]) % 1000000007;
    j += fp;
    int tmpA = 0;
    for(i = fP+1; str[i]; ++i) {
        if (str[i] == 'A')
            tmpA = (tmpA + A[i]) % 1000000007;
        if (str[i] == 'P')
            j = (j + (fp - tmpA)) % 1000000007;
    }
    printf("%d\n", j);
    return 0;
}
