#include<stdio.h>
int main()
{
    int digit=123;
    int x=((digit%10)*100) + (digit/10);
    printf("%d", x);

    return 0;
}

