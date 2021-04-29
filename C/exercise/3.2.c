#include<stdio.h>                                  /* 编译预处理命令 */
int factorsum(int);                                /* 函数声明 */
int main()                                         /* 主函数 */
{
    int i,m,n;                                     /* i：循环变量，m，n：正整数 */
    printf("输入两个正整数m和n(1<=m<=n<=10000)："); /* 输入提示 */
    scanf("%d%d", &m,&n);                          /* 输入m，n*/
    printf("%d到%d之间的所有完数是：\n",m,n);       /* 输出m到n之间的所有完数 */
    for( i=m;i<=n;i++)                             /* i从m开始，到n结束，每次增加1 */
    {
        if(factorsum(i)==i)                        /* 调用factorsum(x)函数，判断i的因子和是否与它本身相等 */
            printf("%d ",i);                       /* 如果相等，则输出该完数 */
    }
    return 0;                                      /* 函数返回0 */
}

int factorsum(int x)                               /* 定义factorsum(x)函数 */
{
    int j,sum=0;                                   /* j：循环变量，sum：因子和 */
    for(j=1;j<x/2+1;j++)                           /* j从1开始，到x/2+1结束，每次增加1 */
    {
        if(x%j==0)                                 /* 判断j是否为x的因子 */
            sum+=j;                                /* 如果是，则累加j */
    }
    return sum;                                    /* 函数返回x的因子和 */
}