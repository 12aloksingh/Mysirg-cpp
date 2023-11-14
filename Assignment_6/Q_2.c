 #include<stdio.h>
 int main()
 {
     int num,sum=0,i;
     printf("Enter a number\n");
     scanf("%d",&num);
     for(i=1; i<=num; i++){
        sum=sum+i*2;
        printf("%d +",i*2);
     }
     printf(" = %d ",sum);

     return 0;
 }
