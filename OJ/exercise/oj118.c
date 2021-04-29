#include<stdio.h>
int main()
{
    int a[100]={0},i=0,j;
    while (scanf("%d",&a[i])!=EOF)
    {
        i++;
    }
    for(j=0;j<i-1;j++)
    {
        if(a[j]>=a[j+1])
        {
            printf("NO");
            break;
        }
        else if(j==i-2)
            printf("YES");
    }
    return 0;
}