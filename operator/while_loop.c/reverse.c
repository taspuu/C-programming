#include<stdio.h>
int main(){

 int rem,num,temp,sum=0;

 printf("Enter a int: ");
 scanf("%d",&num);

 temp=num;
 while(temp!=0)
 {
  rem=temp%10;
  sum=sum*10+rem;
  temp/=10;

 }
 printf("Reverse num: %d",sum);

getchar();
}