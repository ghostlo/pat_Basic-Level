//
//  main.cpp
//  14.1009
//
//  Created by time on 18/3/8.
//  Copyright © 2018年 ghostlo. All rights reserved.
//

#include <ostream>
#include <cstdio>

int main()
{
    int a;
    int b;
    int c[100];
    scanf("%d %d", &a, &b);
    b %= a;
    for(int i = 0; i < a; ++i)
        scanf("%d", &c[i]);
    for(int i = 0; i < b; ++i)
    {
        int tmp = c[a-1];
        for(int j = a-1; j!= 0; --j)
            c[j] = c[j-1];
        c[0] = tmp;
    }
    printf("%d", c[0]);
    for(int i = 1; i < a; ++i)
        printf(" %d", c[i]);
    return 0;
}
