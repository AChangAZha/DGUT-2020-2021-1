#include <stdio.h>
int main()
{
    int a[10]={0};
    int n,i,j,t;
    for(i=0;i<10;++i)
        scanf("%d",&a[i]);
    for(i=0;i<9;++i)
    {
        for(j=0;j<9-i;++j)
        {
            if(a[j]<a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(j=0;j<10;j++)
    printf("%d ",a[j]);
    return 0;
}