#include<stdio.h>
int main()
{
    int date, month, year;
    printf("Enter date dd/mm/yyyy");
    scanf("%d/%d/%d", &date, &month, &year);
    printf("Day-%d ,Month-%d ,Year-%d", date, month, year);
    return 0;
}
