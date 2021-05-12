#include <stdio.h>
#include <string.h>
void enterStr(char *str,int num)
{
    char tmp[50];
    while(1)
    {
        scanf("%s",tmp);
        if(strlen(tmp)<num) break;
        printf("字数超过限制，请重新输入：");
        while (getchar()!='\n');
    }
    strcpy(str,tmp);
}
int main()
{
    char str[2];
    enterStr(str,sizeof(str));
}