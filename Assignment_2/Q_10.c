#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    int y=x%10;
    x=x-y;
    printf("%d",x);

    return 0;
}

