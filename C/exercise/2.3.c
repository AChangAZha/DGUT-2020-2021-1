#include<stdio.h>                        /* 编译预处理命令 */
int main()                               /* 主函数 */
{
    int n,i,score,sum=0,A=0,B=0,C=0,D=0,E=0;
    double average;
    printf("请输入学生总人数（正整数）：");                                           
    scanf("%d",&n);                      /* 输入学生总人数n */
    printf("请输入%d个学生成绩（0-100间整数）：",n);
    for(i=1;i<=n;i++)                    /* 对输入的成绩检查对应等级并统计各等级人数 */
	{
        scanf("%d",&score);              /* 输入n个学生的成绩 */
        sum=sum+score;                   /* 所有成绩相加 */
        if(score>=60)
            if(score>=80)
                if(score>=90)
                    A++;
                else
                    B++;
            else
                if(score>=70)
                    C++;
                else
                    D++;    
	    else
            E++;
    }
    average=sum/n;                       /* 计算平均分 */
    printf("平均分=%.2lf\n",average);    /* 输出平均分 */
    printf("A级人数=%d，B级人数=%d，C级人数=%d，D级人数=%d，E级人数=%d",A,B,C,D,E);
    return 0;                            /* 函数返回0 */
}