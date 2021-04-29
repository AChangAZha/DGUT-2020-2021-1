#include<stdio.h>
struct Student
{
    int num,score;
    char name[10];
};
int main()
{
    int i;
    struct Student s[10];
    void sort(struct Student s[]);
    for(i=0;i<10;i++)
    {
        printf("请输入第%d个学生的学号、姓名和成绩：\n",i+1);
        scanf("%d%s%d",&s[i].num,&s[i].name,&s[i].score);
    }
    sort(s);
    for(i=0;i<10;i++)
    {
        printf("学号：%d 姓名：%s，成绩：%d\n",s[i].num,s[i].name,s[i].score);
    }
    return 0;
}
void sort(struct Student s[])
{  
	int i,j;
    struct Student temp;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		if(s[j].score>s[j+1].score)
		{
			temp=s[j];
			s[j]=s[j+1];
			s[j+1]=temp;
		}
	}
}
