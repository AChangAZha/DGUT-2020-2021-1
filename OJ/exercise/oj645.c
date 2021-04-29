#include<stdio.h>
#include<string.h>
int main()
{
    char a[81],b[81];
    int d[81]={0},i,j;
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;i<strlen(a);i++)
    {
        for(j=0;j<strlen(b);j++)
        {
            if((int)b[j]==(int)a[i]||(int)b[j]+32==(int)a[i]||(int)b[j]-32==(int)a[i])
            {
                if(d[j]==0)
                {   
                    d[j]=1;
                    break;
                }
                else
                {
                    continue;
                }
            }
        }
    }
    for(i=0;i<strlen(b);i++)
    {
        if(d[i]==0)
        {
            printf("N");
            break;
        }
        else if(i==strlen(b)-1)
            printf("Y");
    }
    return 0;
}