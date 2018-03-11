//
//  main.cpp
//  15.1035_sort
//
//  Created by time on 18/3/11.
//  Copyright © 2018年 ghostlo. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
bool same(int *a, int *b, int n)
{
    for(int i = 0;i < n; ++i)
        if (a[i] != b[i])
            return false;
    return true;
}
void print_arr(int *a, int n)
{
    for(int i = 0; i < n; ++i) {
        if (i == 0)
            printf("%d", a[i]);
        else
            printf(" %d", a[i]);
    }
    printf("\n");
}

bool iS(int *a, int *step, int n)
{
    int i, j;
    for(i = 0; i < n-1 && step[i] <= step[i+1]; ++i);
    for(j = i + 1; j < n && a[j] == step[j]; ++j);
    if (j == n) {
        printf("Insertion Sort\n");
        sort(a, a+i+2);
        print_arr(a, n);
        return true;
    } else {
        return false;
    }
}

void mS(int *arr, int *step, int n)
{
    printf("Merge Sort\n");
    int itvl = 1;
    bool flag = true;
    while(flag) {
        flag = !same(arr, step, n);
        itvl = itvl * 2;
        for(int i = 0; i < n/itvl; ++i)
            sort(arr + i * itvl, arr + (i+1)*itvl);
        sort(arr + n/itvl*itvl, arr + n);
    }
    print_arr(arr, n);
}

int main()
{
    int n;
    int first[100];
    int second[100];
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
        scanf("%d", &first[i]);
    for(int i = 0; i < n; ++i)
        scanf("%d", &second[i]);
    if (!iS(first, second, n))
        mS(first, second, n);
    return 0;
}
