#include<stdio.h>
int main()
{
    struct time
    {
        int hrs;
        int min;
        int sec;
    };
    struct time t1,t2,diff;
    printf("Enter the starting time in HH:MM:SS:");
    scanf("%d %d %d",&t1.hrs,&t1.min,&t1.sec);
    printf("Enter the ending time in HH:MM:SS:");
    scanf("%d %d %d",&t2.hrs,&t2.min,&t2.sec);
    diff.sec=(t1.hrs*3600+t1.min*60+t1.sec)-(t2.hrs*3600+t2.min*60+t2.sec);
    if(diff.sec<0)
    {
        diff.sec=(t2.hrs*3600+t2.min*60+t2.sec)-(t1.hrs*3600+t1.min*60+t1.sec);
    }
    diff.hrs=diff.sec/3600;
    diff.sec=diff.sec%3600;
    diff.min=diff.sec/60;
    diff.sec=diff.sec%60;
    printf("time taken=%d :%d: %d",diff.hrs,diff.min,diff.sec);
}
