#include<stdio.h>
int main(){
 int value[5],sum=0,count;
 float avarage;

  for( count=0; count<5; count++)
  { 

    printf("Index[%d] :", count+1);
    scanf("%d",&value[count]);
  }
  

  for( count =0; count<5; count++)
  {

   sum=sum+value[count];

  }
          avarage= (float)sum/5;


   printf("The result of sum and average is : %d & %.2lf",sum,avarage);



  return 0;
}