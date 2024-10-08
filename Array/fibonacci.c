#include<stdio.h>
int main()
{
  int a[300],i,n;
  
  printf("enter the term of fibonacci series:");
  scanf("%d",&n);
  a[0]=0;
  a[1]=1; 
  
  for(i=2;i<n;i++)
  {
    a[i]=a[i-1]+a[i-2];
  }
  
  printf("fibonacci series:");

  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }

  getchar();
}