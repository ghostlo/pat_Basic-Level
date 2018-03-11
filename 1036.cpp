#include <cstdio>
int main()
{
    int a;
    char b;
    scanf("%d %c", &a, &b);
    int row = int(a/2.0+0.5);
    for(int i = 0; i < row; ++i)
    {
        printf("%c", b);
        for(int j = 0; j < a-2; ++j)
            if (i == 0 || i == row-1)
                printf("%c", b);
            else
                printf(" ");
        printf("%c\n", b);
    }
    return 0;
}
