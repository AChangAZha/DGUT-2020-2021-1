#include<stdio.h>                                     /* 编译预处理命令 */
int main()                                            /* 主函数 */
{
    int score;                                        /* 定义变量score：百分制分数 */
    printf("Input score(0≤score≤100):");              /* 输入提示 */
    scanf("%d",&score);                               /* 输入一个0-100间整数score */
    if(score<0 || score>100)                          /* 判断score是否非法 */
        printf("Data error!");                        /* 若非法则输出错误提示 */
    else                                              /* 若score合法 */
        switch (score/10)                             /* 多分支评定成绩等级 */
        {
            case 10:case 9: printf("Grade=A");break;  /* 若90≤score≤100则为A等级 */
            case 8: printf("Grade=B");break;          /* 若80≤score<90则为B等级 */
            case 7: printf("Grade=C");break;          /* 若70≤score<80则为C等级 */
            case 6: printf("Grade=D");break;          /* 若60≤score<70则为D等级 */
            default: printf("Grade=E");break;         /* 若0≤score<60则为E等级 */
        }
    return 0;                                         /* 函数返回0 */
}