#include<stdio.h>
int main()
{
    int month_no;
    printf("Enter month number");
    scanf("%d", &month_no);
    if((month_no==1)||(month_no==3)||(month_no==5)||(month_no==7)||(month_no==8)||(month_no==10)||(month_no==12))
        printf("Month has 31 days");
    else if(month_no==2)
        printf("month has 28 or 29 days");
    else
        printf("month has 30 days");

    return 0;
}
