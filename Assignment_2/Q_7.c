#include<stdio.h>
int main()
{
    int x,count=0;
    printf("Enter a number\n");
    scanf("%d", &x);
    while(x!=0)
    {
        int result = x&1;
        count++;
        if(result == 1)
        {
            printf("%d", count);
            break;
        }

        x = x>>1;
    }


    return 0;
}

