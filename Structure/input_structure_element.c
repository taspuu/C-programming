#include<stdio.h>
struct person
  {
   int age;
   float salary;
  };
int main()
{
    
    struct person p1,p2; //local variable

   printf("Enter age and salary\n");
    scanf("%d %f",&p1.age,&p1.salary);
    printf("Age=%d\nSalary=%.2f",p1.age,p1.salary);
    
  printf("\nEnter age and salary\n");
    scanf("%d %f",&p2.age,&p2.salary);
    printf("\nAge=%d\nSalary=%.2f",p1.age,p1.salary);
}