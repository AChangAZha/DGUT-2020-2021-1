#include<stdio.h>
int main()
{
    int a1, b1, c1;
    int d1, e1, f1;
    int a2, b2;
    int c2, d2;
    int e2, f2;
    int a, b;
    int c, d;
    while(scanf("%d %d %d\n%d %d %d\n%d %d\n%d %d\n%d %d",&a1,&b1,&c1,&d1,&e1,&f1,&a2,&b2,&c2,&d2,&e2,&f2,&a,&b,&c,&d)!=EOF)
    {
	    a = a1*a2 + b1*c2 + c1*e2;
	    b = a1*b2 + b1*d2 + c1*f2;
	    c = d1*a2 + e1*c2 + f1*e2;
	    d = d1*b2 + e1*d2 + f1*f2;
	    printf("%d %d\n%d %d\n",a ,b ,c ,d);
    }
    return 0;
}