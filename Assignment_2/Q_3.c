#include<stdio.h>
int main()
{
    int x,y,t;
    printf("Enter value of x and y\n");
    scanf("%d%d",&x,&y);
    printf("x=%d y=%d\n",x,y);
    t=x;
    x=y;
    y=t;
    printf("After swap x=%d and y=%d",x,y);
    return 0;

}
