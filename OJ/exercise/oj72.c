#include<stdio.h>
int main()
{
    int i,X,Y,sum=0;
    scanf("%d%d",&X,&Y);
    for(i=X;i<=Y;i++)
    {
        if(i%3==1&&i%5==3)
        {
            sum+=i;
        }
    }
    printf("%d",sum);
    return 0;
}