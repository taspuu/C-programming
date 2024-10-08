//1*2+2*3+3*4+....+n1*n2
#include<stdio.h>
int main(){
  int i,j,n,m,sum=0;

 printf("Enter the last two value: ");
 scanf("%d %d",&n,&m);
i=1;
j=2;
      while(i<=n && j<=m)
       {
   
        sum=sum+i*j;
        i++;
        j++;

       } 
    printf("The result is: %d",sum);


    getchar();
}