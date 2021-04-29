#include<stdio.h>                         /* 编译预处理命令，包含stdio.h头文件 */
#include<math.h>                          /* 编译预处理命令，包含math.h头文件 */
int main()                                /* 主函数 */
{
    int i,sum,t,a,count=0;                /* i：循环变量，sum：各数位数字立方和，t：临时变量，a：末位数，count：个数 */
    printf("1-10000之间所有水仙花数：\n"); 
    for(i=1;i<=10000;i++)                 /* i从1开始，到10000结束，每次增加1 */
    {
        sum=0;                            /* 令sum=0 */
        t=i;                              /* 令t=i */
        while(t!=0)                       /* 求t的各数位数字的立方和 */
        {
            a=t%10;                       /* 取t的末位数 */
            sum=sum+pow(a,3);             /* 累加各数位数字的立方和 */
            t=t/10;                       /* 去掉t的末位数 */
        }
    if(sum==i)                            /* 若该整数各数位数字的立方和等于本身 */
    {
        printf("%d\n",i);                 /* 输出该数 */
        count++;                          /* 个数+1 */
    }
    }
    printf("一共有%d个",count);
    return 0;                             /* 函数返回0 */
}