#include<stdio.h>
int main()
{
    int a,b,c;
    float d;
    printf("Enter value of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
        printf("root are real and distinct");
    else if(d==0)
        printf("roots are real and equal");
    else
        printf("Imaginary roots");

    return 0;
}
