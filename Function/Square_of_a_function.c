#include<stdio.h>
#include<math.h>

int main()
{
    int num;
    printf("Enter a int: ");
    scanf("%d",&num);
    int result=square(num);

    printf("The result is : %d",result);


}


int square(int x)
{
   return x*x;
}