#include<stdio.h>
int main(){

int temp;
float scale,conv;

printf("Choose the following option\n\n");
printf("1. C' to F'\n");
printf("2. F' to C'\n\n");
printf("Your ans is: ");
scanf("%d",&temp);

switch(temp)
{

case 1:
{
    printf("Enter the C' : ");
    scanf("%f",&scale);
    conv=(scale*1.8)+32;
    printf("f' scale is: %.2f",conv);

 break;
}

case 2:
{
    printf("Enter the F' : ");
    scanf("%f",&scale);
    conv=(scale-32)/1.8;
    printf("C' scale is: %.2f",conv);

break;
}
default: printf("Choose the right option");

}

return 0;

}