#include <stdio.h>
int main()
{
    int i,n,a[35]={3,4,5};
    scanf("%d",&n);
    for(i=3;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2]+a[i-3];
        if(i==n-1)
        {
            printf("%d",a[i]);
        }
    }
    return 0;
}