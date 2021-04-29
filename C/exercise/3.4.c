#include<stdio.h>                      /* 编译预处理命令 */
int fact(int);                         /* 函数声明 */
int main()                             /* 主函数 */
{ 
    int n;                             /* n：正整数 */
    printf("请输入n值：");              
    scanf("%d",&n);                    /* 输入正整数n */
    printf("t=%d！的值：%d",n,fact(n)); /* 调用fact(x)函数 */
    return 0;
}

int fact(int x)                        /* 定义函数fact(x)函数 */
{
    if(x==0)                           /* 递归出口：如果x等于0 */
        return 1;                      /* 函数返回1 */
    else                               /* 如果x大于1 */
        return fact(x-1)*x;            /* 递归调用，函数返回(x-1)！*x的值 */
}