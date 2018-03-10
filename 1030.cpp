#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
long int arr[100000];
int main()
{
    int n, p;
    cin>>n>>p;
    for(int i = 0; i < n; ++i)
        cin>>arr[i];
    sort(arr, arr+n);
    int max_len = 0;
    int prev_j = 0;
    for(int i = 0; i < n; ++i) {
        int j;
        for(j = prev_j; j < n; ++j)
            if (arr[j] > arr[i]*p)
                break;
        if (j < n) {
            max_len = (j-i) > max_len ? (j-i):max_len;
            prev_j = j-1;
        } else {
            max_len = (n-i) > max_len ? (n-i):max_len;
            prev_j = n;
        }
    }
    printf("%d\n", max_len);
    return 0;
}
