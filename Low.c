#include<stdio.h>
int main()
{
    union num{
        int x;
        int y;
    };
    union num n;
    scanf("%d",&n.x);
    printf("Value of x:%d\n",n.x);
    scanf("%d",&n.y);
    printf("Value of y:%d\n",n.y);
    printf("Value of x:%d",n.x);
}
