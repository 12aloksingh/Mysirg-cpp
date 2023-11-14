
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value of three sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
    if((a<b+c)&&(b<a+c)&& (c<a+b))
        printf("triangle is valid");
    else
        printf("Invalid triangle");

    return 0;
}
