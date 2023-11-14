#include<stdio.h>
int main()
{
    int number,unit_digit;
    printf("Enter a number");
    scanf("%d", &number);
    unit_digit=number%10;
    printf("Unit digit of %d is %d",number,unit_digit);
    return 0;
}
