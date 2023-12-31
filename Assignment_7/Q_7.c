#include<stdio.h>
int main()
{
    int i,j,flag=0,n1,n2;
    printf("Enter two number");
    scanf("%d %d", &n1,&n2);
    printf("prime number between %d and %d is ", n1,n2);
    for(i=n1; i<=n2; i++)
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

        }

    }
    return 0;
}

