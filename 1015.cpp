//
//  main.cpp
//  15.1015
//
//  Created by time on 18/3/9.
//  Copyright © 2018年 ghostlo. All rights reserved.
//

#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
struct DC
{
    int no;
    int de;
    int cai;
    int type;
};

bool cmp(DC &a, DC &b)
{
    bool flag1 = (a.type < b.type);
    bool flag2 = (a.type == b.type) && (a.de + a.cai) > (b.de + b.cai);
    bool flag3 = (a.type == b.type) && (a.de + a.cai) == (b.de + b.cai) && (a.de > b.de);
    bool flag4 = (a.type == b.type) && (a.de + a.cai) == (b.de + b.cai) && (a.de == b.de) && (a.no < b.no);
    return flag1 | flag2 | flag3 | flag4;
}

int main()
{
    int n,l,h;
    int m = 0;
    vector<DC> stu;
    cin>>n>>l>>h;
    for(int i = 0; i < n; ++i) {
        DC dc;
        scanf("%d %d %d", &dc.no, &dc.de, &dc.cai);
        if (dc.de >= l && dc.cai >= l) {
            if (dc.de >= h && dc.cai >= h) {
                dc.type = 1;
            } else if (dc.de >= h) {
                dc.type = 2;
            } else if (dc.de >= dc.cai) {
                dc.type = 3;
            } else {
                dc.type = 4;
            }
            stu.push_back(dc);
            m++;
        }
    }
    sort(stu.begin(), stu.end(), cmp);
    cout<<m<<"\n";
    for(int i = 0; i < m; ++i) {
        cout<<stu[i].no<<" "<<stu[i].de<<" "<<stu[i].cai<<"\n";
    }
    return 0;
}
