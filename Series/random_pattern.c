//1-2+3-4+5....n
/*#include<stdio.h>
int main(){
int i,j,n,sum=0;

 printf("Enter the last value: ");
 scanf("%d",&n);

 for(i=1;i<=n;i+=2)
 {

 for(j=2;j<=i;j+=2)
   {

   }
       sum=sum+(i-j);
 }
   printf("%d",sum);   
    getchar();
}*/

//or
#include<stdio.h>
int main(){
int i,j,n,sum=0,odd=0,even=0;

 printf("Enter the last value: ");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {
  if(i%2==0)
  {
    even+=i;
  }
  else
  {
    odd+=i;
  }
 }
   printf("%d",odd-even);   
    getchar();
}