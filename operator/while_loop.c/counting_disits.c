//ex=153  "1^3+5^3+3^3=153" is called armstrong number

#include<stdio.h>
#include<math.h>
int main(){

 int rem,num,temp,count=0,sum=0;

 printf("Enter a int: ");
 scanf("%d",&num);

 temp=num;
 while(temp!=0)
 {
   temp/=10;
   count++;
 }

   
  printf("The number of disit is: %d",count);
 
getchar();
}