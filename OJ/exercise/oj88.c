#include<stdio.h>
int main()
{
    int n,i,j,t;
    int a[10]={0};
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        t=i;
        while(t!=0)
        {
            for(j=0;j<=9;j++)
            {
                if(t%10==j)
                {
                    a[j]++;
                }
            }
            t=t/10;
        }
    }
    for(j=0;j<=9;j++)
        printf("%d\n",a[j]);
    return 0;
}