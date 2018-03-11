#include <cstdio>
char a[10001];
char map[6] = {'P', 'A', 'T', 'e', 's', 't'};
int num[6];
int mapping(char c)
{
    switch(c) {
        case 'P':return 0;
        case 'A':return 1;
        case 'T':return 2;
        case 'e':return 3;
        case 's':return 4;
        case 't':return 5;
        default :return -1;
    }
}
int main()
{
    int b = 0;
    scanf("%s", a);
    for(int i = 0; a[i]; ++i) {
        int ind = mapping(a[i]);
        if (ind != -1) {
            num[ind]++;
            b++;
        }
    }
    for(int i = 0; b; i = (i+1)%6)
        if (num[i]) {
            printf("%c", map[i]);
            num[i]--;
            b--;
        }
    return 0;
}
