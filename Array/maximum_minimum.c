#include<stdio.h>
int main(){

int numbers[]= {20,30,50,70,-4};
int max=numbers[0];
int min=numbers[0];
 for(int i=1;i<5;i++){

  if(numbers[0]<numbers[i])
    
{
   max=numbers[i];
}
 if(numbers[0]>numbers[i])
    
{
   min=numbers[i];
}

 }
  printf("maximum number is %d",max);
  printf("\nmaximum number is %d",min); 
  

}