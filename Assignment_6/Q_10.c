#include<stdio.h>
int main()
{
    int n,i,rev=0,rem;
    printf("Enter a number\n");
    scanf("%d", &n);
    printf("Reverse of %d is", n);
    while(n>0){
        rem=n%10;
        rev=rev*10 +rem;
        n=n/10;
    }
    printf(" %d ",rev);

    return 0;
}
