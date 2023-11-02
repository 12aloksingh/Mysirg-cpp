#include<stdio.h>
int main()
{
    float pi=3.14;
    float Area,radius;
    printf("Enter radius\n");
    scanf("%f", &radius);
    printf("Area of circle is %5.2f having the radius %5.2f", pi*radius*radius , radius );
}

