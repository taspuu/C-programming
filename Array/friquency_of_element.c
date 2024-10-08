#include<stdio.h>
int main(){

  //input part
   
   int size;
      printf("Enter the range of input: ");
      scanf("%d",&size);  
   int value[size];
     int core=value[0],count=0;    


      printf("Enter Your %d value: ",size);
      for(int index=0;index<size;index++)
      {

       scanf("%d",&value[index]);

      }


   //core 
      
      for(int index=0; index<size; index++)

      {   count=0;

        for(int index2=index+1; index2<size; index2++)
        {

            if(value[index]==value[index2])
              {
                count++;
              }

        }
        printf("%d is %d times",value[index],count);
      }
return 0;
}