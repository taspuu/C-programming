#include<stdio.h>


void calculate(int x,int y)
{
    int result=1;
    for(int index=1;index<=y;index++)
    {
      
        result=x*result;
    }
   printf("%d",result);

}

int main(){

 printf("Enter the value of x: ");
 int x;
 scanf("%d",&x);   
 printf("Enter the value of power: ");
 int y;
 scanf("%d",&y);

 calculate(x,y);


}