#include<stdio.h>
int main(){

int element1[5]={1,2,3,4,5};
int element2[5];
  
  for(int index=0; index<5; index++)
      {

        element2[index]=element1[index];


      }

      for(int index=0; index<5; index++)
      {
         printf("%d",element2[index]);
      }   

getchar();
}