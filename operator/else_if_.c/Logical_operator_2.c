#include<stdio.h>
int main(){

int num1,num2,num3;
printf("Enter 3 inteser: ");
scanf("%d%d%d",&num1,&num2,&num3);

if(num1>num2 && num1>num3)
   printf("num1 bigger");
else if(num1<num2 && num2>num3)
   printf("num2 bigger");
else 
   printf("num3 bigger");      
return 0;
}