#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter a number");
    scanf("%d", &num);
    while(num>0)
    {
        num=num/10;
        count++;

    }
    if(count==3)
        printf("number is three digit number");
    else
        printf("Not a three digit number");

    return 0;
}

