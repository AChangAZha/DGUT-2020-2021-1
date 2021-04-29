#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[80];
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
			a[i]='A'+'Z'-a[i];
		}
	}
    for(i=0;a[i]!='\0';i++)
        printf("%c",a[i]);
    return 0;
}