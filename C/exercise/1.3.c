#include<stdio.h>                        /* ����Ԥ�����������stdio.hͷ�ļ� */
#include<math.h>                         /* ����Ԥ�����������math.hͷ�ļ� */
int main()                               /* ������ */
{
	double x, y;                         /* ���������x���Ա�����y������ֵ�� */
	printf("Input x:");                  /* ������ʾ */
	scanf_s("%lf", &x);                  /* �����Ա���x */
	if (x < 0)                           /* ���x<0 */
	{
		y = pow(x, 5) + 2 * x + 1.0 / x; /* ��y=x^5+2x+1/x*/
	}
	else                                 /* ���� */
	{
		y = sqrt(x);                     /* y=x^(1/2) */
	}
	printf("x=%.2lf,y=%.2lf", x, y);     /* ����x��y������2λС�� */
	return 0;                            /* ��������0 */
}