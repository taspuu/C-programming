#include<stdio.h>
int main(){
  
  int i,fact=1,n;
  printf("enter factorial number: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
        fact*=i;
    }
     printf("The result is: %d",fact);
return 0;
}