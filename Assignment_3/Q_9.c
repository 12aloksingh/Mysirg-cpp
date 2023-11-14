#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("%d is greater", a);
    else if(b>c)
        printf("%d is greater", b);
    else if((a==b)||(b==c)||(a==c))
        printf("Greatest number is repeated");

    return 0;
}
