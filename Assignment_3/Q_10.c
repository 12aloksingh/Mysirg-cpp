#include<stdio.h>
int main()
{
    float cp,sp,profit,loss;
    printf("Enter value of cp and sp");
    scanf("%f%f", &cp,&sp);
    profit=sp-cp;
    loss=cp-sp;

    if((sp-cp)>0){
        profit=(profit/cp)*100;
        printf("profit percentage is %.2f",profit);
    }
    else{
        loss=(loss/cp)*100;
        printf("loss percentage is %.2f",loss);
    }

    return 0;
}
