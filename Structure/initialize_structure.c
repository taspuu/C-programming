#include<stdio.h>
struct person
  {
   int age;
   float salary;
  };
int main()
{
    
    struct person p1={27,20000};
    struct person p2={21,25000},p3;; 

   p3=p2;
  
    
    printf("Age=%d\nSalary=%.2f",p1.age,p1.salary);
    printf("\nAge=%d\nSalary=%.2f",p2.age,p2.salary);
    printf("\nAge=%d\nSalary=%.2f",p3.age,p3.salary);
}