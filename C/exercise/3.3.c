#include<stdio.h>                                    /* 编译预处理命令 */
int dectobin(int);                                   /* 函数声明 */
int main()                                           /* 主函数 */
{ 
    int n;                                           /* n：正整数 */
    printf("输入一个正整数n：");                      /* 输入提示 */
    scanf("%d",&n);                                  /* 输入正整数n */
    printf("十进制数%d的二进制数是%d",n,dectobin(n)); /* 调用dectobin(x)函数，输出n的二进制数 */
    return 0;                                        /* 函数返回0 */
}

int dectobin(int x)                                  /* 定义dectobin(x)函数 */
{
    if(x<2)                                          /* 递归出口：如果x小于2 */
        return x;                                    /* 函数返回x的二进制数，即x */
    else                                             /* 如果x不小于2 */
        return dectobin(x/2)*10+x%2;                 /* 递归调用：逢2进位 */
}