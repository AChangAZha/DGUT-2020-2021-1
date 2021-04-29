#include<stdio.h>
double fun(int,double);                                    /* 函数声明 */
int main()                                                 /* 主函数 */
{ 
    int n,x;
    printf("请输入一个整数n（n>=0）：");
    scanf("%d",&n); 
    printf("请输入一个实数x：");
    scanf("%d",&x);
    printf("%d阶勒让德多项式的值：%.1lf",n,fun(n,x)); 
    return 0;
}

double fun(int n,double x)                                 /* 定义fun(n,x)函数 */
{
    if(n==0)                                               /* 递归出口：如果n=0 */
        return 1;                                          /* 函数返回1 */
    else if(n==1)                                          /* 如果n=1 */
        return x;                                          /* 函数返回x的值 */
    else
        return ((2*n-1)*x-fun(n-1,x)-(n-1)*fun(n-2,x))/n;
}