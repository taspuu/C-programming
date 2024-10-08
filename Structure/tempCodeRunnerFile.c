#include<stdio.h>
struct person
  {
   int age;
   float salary;
  };
int main()
{
    
    struct person p1={21,20000};
    struct person p2={21,20000};

   if(p1.age==p2.age && p1.salary==p2.salary)
   {
    printf("Equal");
   }
   else 
   {
    printf("Not Equal");
   }