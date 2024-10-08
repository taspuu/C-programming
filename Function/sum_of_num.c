#include<stdio.h>

int main()
{
   
   int a,b,x;
   printf("Enter two numbers: ");
   scanf("%d %d",&a,&b);

   printf("Sum of %d and %d is %d",a,b,add(a,b));

}

int add(int x, int y)
{


return x+y;
}