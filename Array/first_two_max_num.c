/*#include<stdio.h>
int main(){

int numbers[]= {40,58,68};
int size=sizeof(numbers)/sizeof(numbers[0]);
int first,second;



if(size<2)
{
    printf("Enter more than 1 number");
}
else
{
 
  if(numbers[0]<numbers[1])
    
    {
       first=numbers[1];
       second=numbers[0];
    }
  else
    {
        first=numbers[0];
        second=numbers[1];
    }
     
    for(int index=2;index<size;index++)
    {
        if(numbers[index]>first)
        {
            second=first;
            first=numbers[index];
        }
        else if(numbers[index]>second && numbers[index]!=first)
        {
            second=numbers[index];
            
        }
    }

  }

  printf("1st maximum number is %d\n",first);
  printf("2nd maximum number is %d",second);
  

}*/

//Get first two maximum number using scan

#include<stdio.h>
int main(){


  
  
   
   int first,second;
   int size;
      printf("Enter the range of input: ");
      scanf("%d",&size);  
   int value[size];
       
      printf("Enter Your %d value: ",size);
      for(int index=0;index<size;index++)
      {

       scanf("%d",&value[index]);

      }

      if(size<2)
      {
        printf("Enter more than one value please!!");
      }
      else
      {
        
        if(value[1]>value[0])
        {
            first=value[1];
            second=value[0];
        }
        else
        {
            first=value[0];
            second=value[1];
        }
        
        for(int index=2;index<size;index++)
        {
            if(value[index]>first)

            {
                second=first;
                first=value[index];
            }
            else if(value[index]>second && value[index]!=first)
            {
                second=value[index];
            }

        }
           
           printf("The first maximum number is: %d\n",first);
           printf("The first maximum number is: %d",second);
           

      }
}