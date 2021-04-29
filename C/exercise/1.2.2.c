#include<stdio.h>                  /* 编译预处理命令 */
int main()                         /* 主函数 */
{
	int i, count = 0;              /* 定义变量（i：循环变量，count：个数变量） */
	for (i = 1; i <= 100; i++)     /* for循环语句：i从1开始，到100结束，每次增加1 */
	{
		if (i % 2 == 1)            /* 如果i是奇数 */
		{
			count = count + 1;     /* 则个数+1 */
		}
	}
	printf("count=%d\n", count);   /* 输出个数count */
	return 0;                      /* 函数返回0 */
}