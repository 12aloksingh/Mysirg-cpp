#include<stdio.h>
int main()
{
    char name[50];
    printf("Enter your name\n");
    fgets(name, sizeof(name), stdin);
    printf("\"%s\"", name);

    return 0;
}
