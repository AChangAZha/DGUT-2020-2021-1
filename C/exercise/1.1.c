#include<stdio.h>               /* ����Ԥ�������� */
int main()                      /* ������ */
{
	int i, sum = 0;             /* ���������i��ѭ��������sum���ͱ����� */
	for (i = 1; i <= 100; i++)  /* forѭ����䣺i��1��ʼ����100������ÿ������1 */
	{
		if (i % 2 == 0)         /* ���i��ż�� */
		{
			sum = sum + i;      /* ���ۼ�i */
		}
	}
	printf("sum=%d\n", sum);    /* ����ۼӺ�sum */
	return 0;                   /* ��������0 */
}