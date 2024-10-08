//1+ 1/2+ 1/3+....1/N
#include<stdio.h>
int main(){
double i,n,sum=0;

 printf("Enter the last value: ");
 scanf("%lf",&n);

 for(i=1;i<=n;i++)
 {

 sum=sum+(1/i);

 }
   printf("%.2lf",sum);   
    getchar();
}