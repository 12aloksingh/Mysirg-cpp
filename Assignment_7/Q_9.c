#include<stdio.h>
#include<math.h>
int main()
{

    int num,k,count=0,sum=0,rem;
    printf("Enter a number ");
    scanf("%d", &num);
    k=num;
    while(num > 0){
        num=num/10;
        count++;
    }
    num=k;
    while(num > 0){
        rem=num%10;
        num=num/10;
        sum=sum + pow(rem,count);

    }
    if(sum==k){
        printf("%d is Armstrong number", sum);
    }
    else{
        printf("%d is not Armstrong number", sum);
    }
    return 0;
}
