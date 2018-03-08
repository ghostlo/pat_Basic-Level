//
//  main.cpp
//  15.1010
//
//  Created by time on 18/3/8.
//  Copyright © 2018年 ghostlo. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>

int main()
{
    int a, b;
    bool c=true;
    while(scanf("%d %d", &a, &b) != EOF)
    {
        a = a * b;
        if (b != 0)
            b = b - 1;
        if (a != 0 || b != 0)
        {
            if (c)
            {
                printf("%d %d", a, b);
                c = false;
            }
            else
                printf(" %d %d", a, b);
        }
        if (c)
            printf("0 0\n");
    }
    return 0;
}
