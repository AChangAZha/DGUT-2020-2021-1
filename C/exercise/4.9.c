#include<stdio.h>
int main()
{
	int i=0;
    char a[100][100]={0};             //定义维维数组对字符串进行储存
	while(scanf("%s",*(a+i))!=EOF)
    {
        i++;
    }
    for(i=0;a[i][0]!='\0';i++)
	{
        if(a[i][0]>='a'&&a[i][0]<='z')//对每个字符串的第一个字符进行判断和替换
            a[i][0]-=32;
    }
	for(i=0;a[i][0]!='\0';i++)
	{
		printf("%s ",&a[i][0]);
	}
	return 0;
}