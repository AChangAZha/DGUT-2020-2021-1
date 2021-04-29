#include<stdio.h>
int fun1(int n);
int fun2(int x);
int main()
{
    int n,i,t=0;
    printf("输入一个大于等于6的偶数：");
    scanf("%d",&n);
    for(i=6;i<=n;i=i+2)     
    {           
        if(fun1(i)==0)                //判断从6到n的偶数是否总可以表示成两个素数之和
        {
            printf("%d不能表示成两个素数之和\n",i);
            t++;
        }
    }
    if(t==0)
        printf("从6到%d的偶数总可以表示成两个素数之和",n);
}
int fun1(int n)
{
    int i,j,flag=0;
    for(i=2;i<=n/2;i++)
    {
        if(fun2(i)==1)
        {
            for(j=n-1;j>=n/2;j--)
            {
                if(fun2(j)==1)
                {
                    if(i+j==n)
                    {
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==1)
                break;
        }
    }
    return flag;
}
int fun2(int x)
{
    int i,flag=1;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}