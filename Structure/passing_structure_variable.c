#include<stdio.h>
#include<string.h>


struct Person
{
    char name[20];
    int age;
    float salary;

};
 void display(struct Person P)
 {
    printf("\nName=%s\n",P.name);
    printf("Age=%d\n",P.age);
    printf("Salary=%.2f\n",P.salary);
 }
int main()
{
    struct Person p1,p2;
    strcpy(p1.name,"Taspi");
    p1.age=21;
    p1.salary=20000;
    
    strcpy(p2.name,"Araf");
    p2.age=24;
    p2.salary=25000;

    display(p1);
    display(p2);

    getchar();
}