#include<stdio.h>
int main(){

int num1,num2;
 
 printf("Enter two inteser: ");
 scanf("%d%d",&num1,&num2);
  
  if(num1>num2)
     printf("Num1 interser is big");
 else if(num1<num2)
     printf("Num2 inteser is big");

  else
     printf("Both intesers are equal");

 return 0;

}