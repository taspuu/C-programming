//145= 1!+4!+5!=145 is called strong number
#include<stdio.h>
int main(){

 int rem,num,temp,sum=0,fact,i;

 printf("Enter a int: ");
 scanf("%d",&num);

 temp=num;
 while(temp!=0)
 {
  rem=temp%10;
   fact=1;
   for(i=1;i<=rem;i++)
   {

    fact=fact*i;
   }

  sum+=fact;
  temp/=10;

 }
 if(sum==num)
 {
    printf("%d is a Strong Number",num);

 }
 else
 {
   
    printf("%d is not a Strong Number",num);
 }
getchar();
}
