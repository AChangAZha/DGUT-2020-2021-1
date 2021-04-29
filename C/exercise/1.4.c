#include<stdio.h>               /* 编译预处理命令 */
int main()                      /* 主函数 */
{
	double a = 1, sum = 1, x;   /* 定义变量（a：分母变量，sum：和变量，x：第n项变量 */
	int i, n;                   /* 定义变量（i：循环变量，n：正整数变量 */
	printf("Input n(n>0):");    /* 输入提示 */
	scanf_s("%d", &n);          /* 输入一个正整数n */
	for (i = 2; i <= n; i++)    /* for循环语句：i从2开始，到n结束，每次增加1*/
	{
		a = a + 2;              /* a每次增加2 */
		x = 1 / a;              /* 先令第n项=1÷a */
		if (i % 2 == 0)         /* 如果i为偶数 */
		{
			x = -x;             /* 则第n项=（-1）÷a */
		}
		sum = sum + x;          /* 累加前n项 */
	}
	printf("sum = %.2lf", sum); /* 输出累加和sum，保留2位小数 */
	return 0;                   /* 函数返回0 */
}