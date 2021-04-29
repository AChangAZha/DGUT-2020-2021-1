#include<stdio.h>
int main()
{
    int min,max,n,i,j;
    int data[50000]={0};
    int num[50000]={0};
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&data[i]);
    }
    for(i=0 ; i<n ; i++)
    {
        for (j = i; j < n; j++)
        {
            if(data[i]==data[j])
                num[i]++;
        }
    }
    max=num[0];
    for (i = 0; i < n; i++)
    {
        if(max<=num[i])
        {
            max=num[i];
            min=data[i];
        }
    }
    for(i = 0; i < n; i++)
    {
        if(max==num[i])
        {
            if(data[i]<min)
                min=data[i];
        }
    }
    printf("%d\n",min);
    printf("%d\n",max);
    return 0;
}