#include<stdio.h>                      /* 编译预处理命令 */  
int main()                             /* 主函数 */
{
	int i, sum = 0, count = 0;         /* 定义变量（i：循环变量，sum：和变量，count：个数变量） */
	float average;                     /* 定义变量（average：平均数变量） */
	for (i = 1; i <= 100; i++)         /* for循环语句：i从1开始，到100结束，每次增加1 */
	{
		if (i % 2 == 1)                /* 如果i是奇数 */
		{
			sum = sum + i;             /* 则累加i */
			count = count + 1;         /* 个数+1 */
		}
	}
	average = 1.0*sum / count;         /* 平均数=累加和÷个数 */
	printf("average=%.0f\n", average); /* 输出平均数average */
	return 0;                          /* 函数返回0 */
}