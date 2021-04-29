#include<stdio.h>                                     /* 编译预处理命令，包含stdio.h头文件 */
#include<math.h>                                      /* 编译预处理命令，包含math.h头文件 */
int main()                                            /* 主函数 */
{
    int n,count,a,t;                                  /* n：正整数，count：位数，a：各数位数字，t：临时变量） */
	printf("输入一个正整数：");                        /* 输入提示 */
    scanf("%d",&n);                                   /* 输入一个正整数n */
    if(n<=0)                                          /* 判断n是否非法 */
        printf("Data error!");                        /* 若非法则输出错误提示 */
    else                                              /* 若合法 */
    {
        printf("%d从高位开始逐位分离并输出的结果是",n);
        t=n;                                          /* 令t=正整数n */
        do                                            /* 计算正整数t的位数 */
        {
            t=t/10;                                   /* 去掉正整数t末位 */
            count++;                                  /* 位数+1 */
        } while (t!=0);
        do                                            /* 从高位开始逐位分离并输出 */
        {
            a=n/pow(10,count-1);                      /* 取n的最高位数 */
            n=n-a*pow(10,count-1);                    /* 去掉n的最高位数 */
            count--;                                  /* 位数-1 */
            printf("%d,",a);                          /* 从最高位依次输出各数位数字 */
        } while (count>0);
    }
    return 0;                                         /* 函数返回0 */
}