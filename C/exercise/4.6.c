#include<stdio.h>
void sort(int *list,int n);
int main()
{
    int a[10],n,i;
    printf("输入整数n（1≤n≤10）：");
    scanf("%d",&n);
    printf("输入%d个正整数：",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
    printf("排序后的结果：");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
void sort(int *list,int n)
{
    int i,j,min,t;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(*(list+j)<*(list+min))
                min=j;
        }
        t=*(list+min);
        *(list+min)=*(list+i);
        *(list+i)=t;
    }
}