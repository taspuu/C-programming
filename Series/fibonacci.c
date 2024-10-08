#include<stdio.h>
int main()
{
   int first,second,fibo,n,i,count;
   printf("Enter fibonacci range: ");
   scanf("%d",&n);
   
   first=0;
   second=1;
   count=0;
  for(i=0;i<n;i++)
  {
     if(i<=1)
     { 
       fibo=i;
     }
     else 
    {

       fibo=first+second;
       first=second;
       second=fibo;

    }
       
       printf("%d\n",fibo);

  }
   return 0;
}