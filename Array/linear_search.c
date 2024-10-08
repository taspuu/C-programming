#include<stdio.h>
int main(){

int numbers[]= {20,30,50,70,100,-4};

int search=100;
int found=-1;

 for(int i=0;i<6;i++)
 {
   
   if(numbers[i]==search)
   {
     found=i;
     break;
   }
 }
     if(found==-1)
     {
       printf("not found");
     }
     else
     {
       printf("found");
     }
}