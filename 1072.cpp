#include <stdio.h>

int main()
{
    int n,m,i,j,k,tmp;
    scanf("%d %d",&n,&m);//n学生人数 m被查的物品种类数
    char p[5];//姓名
    int num[10000] = {0};
    for(i = 0;i < m;i++)
    {
        scanf("%d",&tmp);//输入被查物品种类的号码
        num[tmp]++;
    }
    int flag,sum1 = 0,sum2 = 0;
    for(i = 0;i < n;i++)
    {
        flag = 0;
        scanf("%s %d",p,&k);//第i个学生的姓名和个人物品数量
        getchar();//读取一个字符
        for(j = 0;j < k;j++)
        {
            scanf("%d",&tmp);
            if(num[tmp])
            {
                if(!flag)
                {
                    printf("%s:",p);
                    flag = 1;
                    sum1++;
                }
                printf(" %04d",tmp);
                sum2++;
            }
        }
        if(flag)
            printf("\n");
    }
    printf("%d %d\n",sum1,sum2);

    return 0;
}
