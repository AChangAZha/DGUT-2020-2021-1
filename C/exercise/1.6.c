#include<stdio.h>                /* 编译预处理命令，包含stdio.h头文件 */
#include<math.h>                 /* 编译预处理命令，包含math.h头文件 */
int main()                       /* 主函数 */
{
	double sum, x, y;            /* 定义变量（sum：和变量，x：自变量，y：第i项） */
	int i, n;                    /* 定义变量（i：循环变量，n：正整数变量） */
	printf("Input n(n>0):");     /* 输入提示 */
	scanf_s("%d", &n);           /* 输入一个正整数n */
	printf("Input x:");          /* 输入提示 */
	scanf_s("%lf", &x);          /* 输入一个实数x */
	sum = x;                     /* 先令和变量等于第一项x */
	for (i = 2; i <= n; i++)     /* for循环语句：i从2开始，到n结束，每次增加1 */
	{
		y = pow(x, i);           /* 第i项y=x^i */
		sum = sum + y;           /* 累加前n项和 */
	}
	printf("sum = %.2lf", sum);  /* 输出累加和sum */
	return 0;                    /* 函数返回0 */
}