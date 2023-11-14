#include<stdio.h>
int main()
{
    int n,flag=1;
    printf("Enter a number\n");
    scanf("%d", &n);
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            flag=2;
            break;
        }
    }
    if(flag==1)
        printf("%d is prime number", n);
    else
        printf("%d is not prime number", n);

    return 0;
}
