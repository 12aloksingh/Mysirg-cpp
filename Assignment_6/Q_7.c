#include<stdio.h>
int main()
{
    int digit,count=0,i;
    printf("Enter number\n");
    scanf("%d",&digit);
    printf("Number of digit in %d is ",digit);
    while(digit>0){
        digit=digit/10;
        count++;
    }
    printf("%d", count);

    return 0;

}
