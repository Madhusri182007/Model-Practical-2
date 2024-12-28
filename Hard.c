#include<stdio.h>
int c;
int digit (int n)
{
    if(n!=0)
    {
        c++;
        return ( digit(n=n/10));
    }
    else 
    {
        return c;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int count=digit(n);
    printf("No of digits:%d",count);
}
