#include<stdio.h>
int main()
{
    int a[6][6],n,i,j,t=0,k=0,flag=0,max,min;
    printf("输入一个正整数n(1≤n≤6)：");
    scanf("%d",&n);
    printf("输入%d阶方阵A：\n",n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        max=a[i][0];
        for(j=0;j<n;j++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];
                t=j;         //记录下该行中最大值所在的列
            }
        }
        min=a[0][t];   
        for(j=0;j<n;j++)     //寻找该列中的最小值
        {
            if(min>a[j][t])
                min=a[j][t];
                k=j;
        }
        if(max==min)        //若该行上最大值同时也是其所在列的最小值
        {
            flag=1;         //标记
            printf("方阵A的鞍点的下标为[%d][%d]\n",i,t);
        }
    }
    if(flag==0)
        printf("NO");       //若无标记说明该方阵无鞍点
    return 0;
}