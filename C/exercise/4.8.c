#include <stdio.h>
#include <string.h>
void sort(char *p[]);
int main()
{
    int i;
    char a[5][80];        //定义二维数组对储存5个字符串
    char *b[5];           //定义指针数组，方便对字符串的排序
    printf("输入5个字符串：");
    for(i=0;i<5;i++)
    {
        scanf("%s",*(a+i));
        b[i]=*(a+i);
    }
    sort(b);
    printf("输出排序结果：");
    for(i=0;i<5;i++)
    {
        printf("%s ", b[i]);
    }
    return 0;
}
void sort(char *p[])
{
    int i, j;
    char *t;              //临时变量
    for (i=0;i<5;i++)
    {
        for(j=0;j<4-i;j++)
        {
            if(strcmp(p[j], p[j+1])<0)//使用strcmp函数对两个字符串进行比较大小
            {
                t=p[j];
                p[j]=p[j+1];
                p[j+1]=t;
            }
        }
    }
}