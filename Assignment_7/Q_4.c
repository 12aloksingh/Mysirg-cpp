#include<stdio.h>
int main()
{
    int n1,n2,i,Lcm,hcf;
    printf("Enter two number");
    scanf("%d %d", &n1,&n2);
    for(i=2; i<=n1*n2; i++){
        if((i%n1==0) && (i%n2==0)){
            Lcm=i;
            hcf=Lcm/(n1*n2);
            printf("HCF of %d and %d is %d", n1,n2,hcf);
            break;
        }
    }
    return 0;
}
