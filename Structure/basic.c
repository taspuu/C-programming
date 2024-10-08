#include<stdio.h>

//global struture
/*struct person
{

   int age;
   float salary;

};*/
//global variable
//struct person p1,p2;
int main()
{
    //local structure
    struct person
  {
   int age;
   float salary;
  };
    struct person p1,p2; //local variable

    p1.age=20;
    p1.salary=20000;
    printf("Age=%d\nSalary=%.2f",p1.age,p1.salary);

    p2.age=21;
    p2.salary=25000;
    printf("\nAge=%d\nSalary=%.2f",p1.age,p1.salary);
}