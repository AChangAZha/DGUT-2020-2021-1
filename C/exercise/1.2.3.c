#include<stdio.h>                      /* ����Ԥ�������� */  
int main()                             /* ������ */
{
	int i, sum = 0, count = 0;         /* ���������i��ѭ��������sum���ͱ�����count������������ */
	float average;                     /* ���������average��ƽ���������� */
	for (i = 1; i <= 100; i++)         /* forѭ����䣺i��1��ʼ����100������ÿ������1 */
	{
		if (i % 2 == 1)                /* ���i������ */
		{
			sum = sum + i;             /* ���ۼ�i */
			count = count + 1;         /* ����+1 */
		}
	}
	average = 1.0*sum / count;         /* ƽ����=�ۼӺ͡¸��� */
	printf("average=%.0f\n", average); /* ���ƽ����average */
	return 0;                          /* ��������0 */
}