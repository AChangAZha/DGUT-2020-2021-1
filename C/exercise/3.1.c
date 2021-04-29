#include<stdio.h>                                   /* 编译预处理命令 */
int fib(int);                                       /* 函数声明 */
int main()                                          /* 主函数 */
{ 
    int m,n,i;                                      /* 定义变量，m，n：正整数，i：循环变量 */
    printf("输入两个正整数m和n(1<=m<=n<=10000)：");  /* 输入提示 */
    scanf("%d%d",&m,&n);                            /* 输入m和n */
    printf("第%d项到第%d项的Fibonacci数是：\n",m,n); /* 输出第m项到第n项的所有Fibonacci数 */
    for(i=m;i<=n;i++)                               /* i从m开始，到n结束，每次增加1 */
    { 
        printf("%d ",fib(i));                       /* 调用fib(x)函数，输出第i项Fibonacci数 */
    }
    return 0;                                       /* 函数返回0 */
}

int fib(int x)                                      /* 定义fib(x)函数 */
{
    if(x==1||x==2)                                  /* 递归出口：如果x=1或2 */
        return 1;                                   /* 则第x项Fibonacci数为1，函数返回1 */
    else                                            /* 如果x大于2 */
        return fib(x-1)+fib(x-2);                   /* 则函数返回第x项Fibonacci数的前两项之和 */
}