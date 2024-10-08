//Write a C program to find whether a given year is a leap year or not.
#include<stdio.h>
int main(){

int year;

printf("Enter a year: ");
scanf("%d",&year);

if((year%4==0 && year%100!=0) || (year%400==0))
{
    printf("The year is leap year");
}
else
{
    printf("The year is not leap year");
}
return 0;
}