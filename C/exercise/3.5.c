#include<stdio.h>
int fun(int);                                /* 函数声明 */
int main()                                   /* 主函数 */
{ 
    int n;
    printf("请输入n值：");
    scanf("%d",&n); 
    printf("1*3*…*%d的值：%d",2*n-1,fun(n)); /* 调用函数，求1*3*…*(2n-1)的值 */
    return 0;
}

int fun(int x)                               /* 定义fun(x)函数 */
{
    if(x==1)                                 /* 递归出口：如果x=1 */
        return 1;                            /* 函数返回1 */
    else                                     /* 若x大于1 */
        return fun(x-1)*(2*x-1);             /* 递归调用，函数返回1*3*…*(2n-3)*(2n-1)的值 */
}