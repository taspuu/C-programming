#include<stdio.h>
int main(){

 int rem,num,temp,sum=0;

 printf("Enter a int: ");
 scanf("%d",&num);

 temp=num;
 while(temp!=0)
 {
  rem=temp%10;
  sum+=rem;
  temp/=10;

 }
 printf("the sum of the disits is: %d",sum);

getchar();
}