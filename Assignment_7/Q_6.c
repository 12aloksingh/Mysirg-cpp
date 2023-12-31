#include<stdio.h>
int main()
{
    int i,j,flag=0;
    for(i=1; i<=100; i++)
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
