#include <stdio.h>
int main()
{
	int a[6][6],n,i,j,max,min,i1=0,i2=0,j1=0,j2=0;
    printf("输入一个正整数n(1≤n≤6)：");
	scanf("%d",&n);
    printf("输入%d阶方阵A：\n",n);
	for(i=0;i<n;i++)
    {
	    for(j=0;j<n;j++)
	    {
 		    scanf("%d",&a[i][j]);
 	    }
    }
    min=a[0][0];                    //令最大值和最小值为a[0][0]
    max=a[0][0];
 	for(i=0;i<n;i++)
    {
 	    for(j=0;j<n;j++)
 	    {
 	 	    if(a[i][j]>max)        //搜寻最大值，并记录坐标
            {
                max=a[i][j];
                i1=i;
                j1=j;
            }
            else if(a[j][j]<min)   //搜寻最小值，并记录坐标
            {
                min=a[i][j];
                i2=i;
                j2=j;
            }
	 	}
    }
    a[i1][j1]=min;                 //交换方阵A中的最大值与最小值位置
    a[i2][j2]=max;
    printf("交换方阵A中最大值与最小值位置后：\n");
    for(i=0;i<n;i++)
    {
 	    for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
	return 0;
}