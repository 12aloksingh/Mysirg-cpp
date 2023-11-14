#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter a three digit number");
    scanf("%d", &num);
    sum=num%10;
    num=num/10;
    sum=(num%10)+sum;
    num=num/10;
    sum=num+sum;
    printf("sum of digit is %d",sum);

    return 0;
}

