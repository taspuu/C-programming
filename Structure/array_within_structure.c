#include<stdio.h>
struct person
  {
   int age;
   char name[50];
   float salary;
  };
int main()
{
      struct person person[4];
      int i;
     for(i=0;i<4;i++){
      printf("Enter information for person %d:\n",i+1);
      printf("Enter name: ");
      fflush(stdin);
      fgets(person[i].name,sizeof(50),stdin);
      scanf("%d %f",&person[i].age,&person[i].salary);
      printf("%s\n",person[i].name);
      printf("Age=%d\nSalary=%.2f\n",person[i].age,person[i].salary);
     }
     
  getchar();
}