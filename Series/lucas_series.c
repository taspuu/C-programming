#include<stdio.h>
int main(){
int i,first,second,next,n;

   first=2;
   second=1;

printf("Enter the terms of Lucas number: ");
scanf("%d",&n);

printf("%d %d ",first,second);

  for(i=3; i<=n; i++)
     {
    

     next=first+second;
     printf("%d ",next);
     first= second;
     second= next;


     }


  return 0;   
}