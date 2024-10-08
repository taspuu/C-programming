//Write a C program to perform addition, subtraction, multiplication and division of two numbers.

#include<stdio.h>
int main(){

int a=7,b=6,add, sub, mul;

add=a+b;
sub=a-b;
mul=a*b;
float div= (float) a/b;
printf("%d\n%d\n%d\n%lf\n",add,sub,mul,div);
}