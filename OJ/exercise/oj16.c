#include <stdio.h>
int main()
{
    int n,a,i,j;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        j=1;
        for(a=2;a<i;a++)
        {
            if(i%a==0)
            {
                j=0;
                break;
            }
        }
        if(j==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}