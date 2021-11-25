#include<stdio.h>
int fun(int x);
int main()
{
    int n,i,j;
    printf("输入一个大于等于6的偶数：");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)            //从2到n/2之间的数寻找一个素数
    {
        if(fun(i))           //      调用函数，判断是否为素数，如果该数是素数，寻找另一个素数
        {
            for(j=n-1;j>=n/2;j--)  //从n/2到n-1之间的数寻找另一个素数
            {
                if(fun(j))         //调用函数
                {
                    if(i+j==n)     //判断两个素数之和等于输入的偶数
                        printf("%d=%d+%d\n",n,i,j);
                }
            }
        }
    }
}
int fun(int x)                     //该函数用于寻找素数
{
    int i,flag=1;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)                 //判断一个数是否能被除了1和它自身的所有数整除
        {
            flag=0;
            break;
        }
    }
    return flag;
}