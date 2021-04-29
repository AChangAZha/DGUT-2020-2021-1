#include<stdio.h>
void input(int *a,int n);
void swap(int *a,int n);
void output(int *a,int n);
void output(int *a,int n);
int main()
{
    int a[10],n;
    printf("请输入一个正整数n（1<n<=10）：");
    scanf("%d",&n);
    input(a,n);
    swap(a,n);
    output(a,n);
    return 0;
}
void input(int *a,int n)
{
    int i;
    printf("请输入%d个互不相同的整数：",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void swap(int *a,int n)
{
    int *max,*min,*p,temp;
    max=min=a;        //开始时令max和min指向第一个a[0]
    for(p=a+1;p<a+n;p++)
    {
        if(*p>*max)
            max=p;    //若p指向的数大于max指向的数，则令max指向p指向的数
        else if(*p<*min)
            min=p;    //若p指向的数小于min指向的数，则令min指向p指向的数
    }
    temp=a[0];
    a[0]=*min;
    *min=temp;    //将最小数与a[0]交换
    temp=a[n-1];
    a[n-1]=*max;
    *max=temp;    //将最大数与a[n-1]交换
}
void output(int *a,int n)
{
    int *p;
    printf("互换后的n个整数依次是；");
    for(p=a;p<a+n;p++)
    {
        printf("%d ",*p);
    }
}