#include<stdio.h>
int main()
{
    char alpha;
    printf("Enter a alphabet");
    scanf("%c", &alpha);
    if((alpha>=65)&&(alpha<=90))
        printf("Alphabet is uppercase");
    else if((alpha>=97)&&(alpha<=122))
        printf("Alphabet is lowercase");

    return 0;
}
