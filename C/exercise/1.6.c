#include<stdio.h>                /* ����Ԥ�����������stdio.hͷ�ļ� */
#include<math.h>                 /* ����Ԥ�����������math.hͷ�ļ� */
int main()                       /* ������ */
{
	double sum, x, y;            /* ���������sum���ͱ�����x���Ա�����y����i� */
	int i, n;                    /* ���������i��ѭ��������n�������������� */
	printf("Input n(n>0):");     /* ������ʾ */
	scanf_s("%d", &n);           /* ����һ��������n */
	printf("Input x:");          /* ������ʾ */
	scanf_s("%lf", &x);          /* ����һ��ʵ��x */
	sum = x;                     /* ����ͱ������ڵ�һ��x */
	for (i = 2; i <= n; i++)     /* forѭ����䣺i��2��ʼ����n������ÿ������1 */
	{
		y = pow(x, i);           /* ��i��y=x^i */
		sum = sum + y;           /* �ۼ�ǰn��� */
	}
	printf("sum = %.2lf", sum);  /* ����ۼӺ�sum */
	return 0;                    /* ��������0 */
}