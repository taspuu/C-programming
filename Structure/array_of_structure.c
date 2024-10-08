#include<stdio.h>
struct person
  {
   int age;
   float salary;
  };
int main()
{
      struct person person[4];
      int i;
     for(i=0;i<4;i++){
      printf("Enter information for person %d:\n",i+1);
      scanf("%d %f",&person[i].age,&person[i].salary);
      printf("Age=%d\nSalary=%.2f\n",person[i].age,person[i].salary);
     }
     
  getchar();
}