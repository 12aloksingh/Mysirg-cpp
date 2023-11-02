#include<stdio.h>
int main()
{
    int hour,minute;
    printf("Enter time HH:MM");
    scanf("%d:%d", &hour,&minute);
    printf("%d hour and %d minute", hour, minute);

    return 0;
}
