/*example:
3 x 1 = 3
3 x 2 = 6
3 x 3 = 9  */

#include<stdio.h>
int main(){

int num,i;
printf("Enter any number: ");
scanf("%d",&num);

   for(i=1;i<=10;i++)
      printf("%d x %d  =  %d\n",num,i,num*i);

return 0;
}