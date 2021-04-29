#include<stdio.h>
int main()
{
    int i,N;
    double h=100,s=100;
    scanf("%d",&N);
    for(i=1;i<N;i++)
    {
        h=h/2;
        s=s+h*2.0;
    }
    printf("%.4lf",s);
    return 0;
}