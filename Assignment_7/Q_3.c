#include<stdio.h>
int main()
{
    int i,a=0,b=1,c=0,num,flag=0;
    printf("Enter a number");
    scanf("%d",&num);
    //printf("%d,%d",a,b);
    for(i=2; i<=num; i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(c==num)
        {
            printf("it is in fibonacci series");
            flag=1;
        }

    }
    if(flag==0)
        printf("It is not in fibonacci series");
    return 0;

}

