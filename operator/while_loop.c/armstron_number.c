//ex=153  "1^3+5^3+3^3=153" is called armstrong number

#include<stdio.h>
#include<math.h>
int main(){

 int rem,num,temp,sum=0;

 printf("Enter a int: ");
 scanf("%d",&num);

 temp=num;
 while(temp!=0)
 {
  rem=temp%10;
  sum=sum+rem*rem*rem;
  temp/=10;

 }

    if(sum==num)
    {

     printf("The number is armstrong");


    }
    else
    {
        printf("The number is not armstrong");
    }
 
getchar();
}