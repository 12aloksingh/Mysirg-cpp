#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter value of x and y\n");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After swap x=%d and y=%d",x,y);
    return 0;

}

