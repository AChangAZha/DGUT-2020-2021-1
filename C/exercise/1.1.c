#include<stdio.h>               /* 编译预处理命令 */
int main()                      /* 主函数 */
{
	int i, sum = 0;             /* 定义变量（i：循环变量，sum：和变量） */
	for (i = 1; i <= 100; i++)  /* for循环语句：i从1开始，到100结束，每次增加1 */
	{
		if (i % 2 == 0)         /* 如果i是偶数 */
		{
			sum = sum + i;      /* 则累加i */
		}
	}
	printf("sum=%d\n", sum);    /* 输出累加和sum */
	return 0;                   /* 函数返回0 */
}