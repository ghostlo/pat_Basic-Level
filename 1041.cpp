#include <cstdio>
struct Q
{
    char no[15];
    int N;
};
Q map[1001];
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i) {
        int Nu;
        Q q;
        scanf("%s %d %d", q.no, &Nu, &q.N);
        map[Nu] = q;
    }
    int query_n;
    scanf("%d", &query_n);
    for(int i = 0; i < query_n; ++i) {
        int Nu;
        scanf("%d", &Nu);
        printf("%s %d\n", map[Nu].no, map[Nu].N);
    }
    return 0;
}
