#include<stdio.h>
int main(){

float mark;
printf("Enter your mark: ");
scanf("%f",&mark);

if(mark>100 || mark<0)
       printf("invalid mark");
 else if(mark>=80 && mark<=100)
       printf("A+");
else if(mark<80 && mark>=70)           
       printf("A");
 if(mark<70 && mark>=60) 
       printf("A-");
 if(mark<60 && mark>=50) 
       printf("b+");
 if(mark<50 && mark>=33) 
       printf("C+");
 else if(mark<33 && mark>=0)
       printf("Fail");      

return 0;
}