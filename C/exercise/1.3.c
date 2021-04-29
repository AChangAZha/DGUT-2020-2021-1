#include<stdio.h>                        /* 编译预处理命令，包含stdio.h头文件 */
#include<math.h>                         /* 编译预处理命令，包含math.h头文件 */
int main()                               /* 主函数 */
{
	double x, y;                         /* 定义变量（x：自变量，y：函数值） */
	printf("Input x:");                  /* 输入提示 */
	scanf_s("%lf", &x);                  /* 输入自变量x */
	if (x < 0)                           /* 如果x<0 */
	{
		y = pow(x, 5) + 2 * x + 1.0 / x; /* 则y=x^5+2x+1/x*/
	}
	else                                 /* 否则 */
	{
		y = sqrt(x);                     /* y=x^(1/2) */
	}
	printf("x=%.2lf,y=%.2lf", x, y);     /* 输入x，y，保留2位小数 */
	return 0;                            /* 函数返回0 */
}