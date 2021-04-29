#include<stdio.h>
struct Date
{
    int year,month,day;
};
int main()
{
    struct Date d;
    int FishNet(struct Date d);
    printf("请输入一个日期：");
    scanf("%d%d%d",&d.year,&d.month,&d.day);
    printf("%d",FishNet(d));
    return 0;
}
int FishNet(struct Date d)
{
    int leap,i,j,day=d.day;
    int tab[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};   //闰年和非闰年的2月份天数分开讨论
    for(i=1990;i<=d.year;i++)
    {
        leap=(i%4==0&&i%100!=0)||(i%400==0);     //判断是否为闰年，
        if(i==d.year)
        {
            for(j=1;j<d.month;j++)
                day+=tab[leap][j];               //若为闰年，leap=1，否则leap=0
        }
        else
        {
            if(leap)
                day+=366;
            else
                day+=365;
        }
    }
    if(day%5==4||day%5==0)                      //判断打鱼还是晒网，返回工作状态
        return 0;
    else
        return 1;
}