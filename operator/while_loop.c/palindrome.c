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
  sum=sum*10+rem;
  temp/=10;

 }

    if(sum==num)
    {

     printf("The number is palisdrome");


    }
    else
    {
        printf("The number is not palisdrome");
    }
 
getchar();
}