#include<stdio.h>
#include<string.h>
int main()
{
    int i,k,flag=1;
	char a[80];
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
        k=strlen(a)-i-1;
		if(a[i]!=a[k])
		{
			flag=0;         //标记
			break;
		}
	}
	if(flag==1)
        printf("%s是回文",a);
	else
        printf("%s不是回文",a);
	return 0;
}