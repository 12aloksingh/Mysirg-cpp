#include<stdio.h>
int main()
{
    int num,i,fact=1;
    printf("Entre a number\n");
    scanf("%d", &num);
    printf("factorial of %d is",num);
    for(i=1; i<=num; i++){
        fact=fact*i;
    }
    printf(" %d",fact);

    return 0;

}
