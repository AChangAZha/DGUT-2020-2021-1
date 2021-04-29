#include<stdio.h>
int main()
{
    int a, b, i, n,e,sum1=0,sum2=0;
    scanf("%d", &n);
    for (e = 0;e < n;e++)
    {
        scanf("%d %d", &a, &b);
        for (i = 1;i<a/2+1;i++)
        {
            if (a%i == 0)
            sum1 += i;
        }
        for (i = 1;i<b/2+1;i++)
        {
            if (b%i == 0)
            sum2 += i;
        }
    if (sum1 == b && sum2 == a)
    printf("YES\n");
    else
    printf("NO\n");
    }
}