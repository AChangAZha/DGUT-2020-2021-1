#include<stdio.h>
int main()
{
    int a[8],flag[8]={0},i,j,temp,n,num;
    printf("输入数据的个数（0<n<9）：");
    scanf("%d",&n);
    printf("请输入%d个互不相同的整数：",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;++i)           //冒泡排序
    {
        for(j=0;j<n-i-1;++j)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("输入要删除的整数：");
    scanf("%d",&num);
    for(i=0;i<n;i++)             //搜寻要删除的数，并标记
    {
        if(a[i]==num)
            flag[i]=1;           //flag[i]为标记作用
    }
    printf("删除%d后的排序结果：",num);
    for(i=0;i<n;i++)             //输出未被标记的数
    {
        if(flag[i]==0)
            printf("%d ",a[i]);
    }
    return 0;
}