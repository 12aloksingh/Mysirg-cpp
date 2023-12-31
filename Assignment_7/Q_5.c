#include<stdio.h>
int main()
{
    int n1,n2,i,Lcm,hcf;
    printf("Enter two number\n");
    scanf("%d %d", &n1,&n2);
    for(i=2; i<=n1*n2; i++){
        if((i%n1==0) && (i%n2==0)){
            Lcm=i;
            hcf=Lcm/(n1*n2);
            if(hcf==1)
                printf("%d and %d are co-prime",n1,n2);
            else
                printf("not co-prime number");
            break;
        }
    }
    return 0;
}

