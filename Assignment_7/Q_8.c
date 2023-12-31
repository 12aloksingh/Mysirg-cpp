#include<stdio.h>
int main()
{
    int i,j,flag=0,n;
    printf("Enter a number");
    scanf("%d", &n);
    printf("Next prime number after %d is ",n);
    for(i=n+1; ; i++)
    {
        flag=0;
        for(j=2; j<=i/2; j++)
        {
            if(i%j == 0)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            printf("%d ",i);
            break;

        }

    }
    return 0;
}


