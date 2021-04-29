#include <stdio.h>
#include <string.h>
void strmcpy(char *s, char *t, int m);
int main()
{
    char s[80],t[80];
    int m;
    printf("输入字符串t：");
    gets(t);
    printf("输入开始位置m：");
    scanf("%d",&m);
    strmcpy(s,t,m);
    printf("输出字符串s：%s",s);
    return 0;
}
void strmcpy(char *s, char *t, int m)
{
    t=t+m;
    strcpy(s,t);
}