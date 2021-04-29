#include<stdio.h>
struct Student
{
    int num,score,rank;
    char name[10],grade;
};
int main()
{
    int i;
    double average;
    struct Student s[10];
    double Static(struct Student s[]);
    for(i=0;i<10;i++)
    {
        printf("请输入第%d个学生的学号、姓名和成绩：\n",i+1);
        scanf("%d%s%d",&s[i].num,&s[i].name,&s[i].score);
    }
    average=Static(s);
    printf("平均成绩为%.2lf\n",average);
    for(i=0;i<10;i++)
    {
        printf("学号：%d 姓名：%s，成绩：%d，等级：%c，名次：%d\n",s[i].num,s[i].name,s[i].score,s[i].grade,s[i].rank);
    }
    return 0;
}
double Static(struct Student s[])
{                                            
    double average;
    int i,j,A=0,B=0,C=0,D=0,E=0,sum=0;
    for(i=0;i<10;i++)
    {
        sum=sum+s[i].score;
        switch (s[i].score/10)                             
        {
            case 10:case 9: s[i].grade='A';A++;break;  
            case 8: s[i].grade='B';B++;break;
            case 7: s[i].grade='C';C++;break; 
            case 6: s[i].grade='D';D++;break;       
            default: s[i].grade='E';E++;break;         
        }
    }
    s[0].rank=1;s[1].rank=1;s[2].rank=1;s[3].rank=1;s[4].rank=1;s[5].rank=1;s[6].rank=1;s[7].rank=1;s[8].rank=1;s[9].rank=1;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(s[i].score<s[j].score)
                s[i].rank=s[i].rank+1;
        }
    }
    average=sum/10;
    printf("A级人数=%d，B级人数=%d，C级人数=%d，D级人数=%d，E级人数=%d\n",A,B,C,D,E);
    return average;
}