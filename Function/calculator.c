#include<stdio.h>

float cal_culator(float,char,float);


int main(){

float input,input2;
char sign;
printf("Enter your equation(A+B): ");
scanf("%f%c%f",&input,&sign,&input2);
float result;
printf("The %.2f %c %.2f = %.2f",input,sign,input2, cal_culator(input,sign,input2));

getchar();
}


float cal_culator(float x, char c, float y)
{
   float sum;
   int d;
   switch(c)
   {
      case'+':{ sum=x+y;
      break;
      }
       case'-':{ sum=x-y;
      break;
       }
       case'*':{ sum=x*y;
      break;
       }
       case'/':{ sum=x/y;
      break;
       }
       case'%':{
        d=(int)x;
        d%=(int)y;
        sum=d;
      break;
       }       
     default: printf("Please Input a valid Equation!!!");
   
     
   }
    return sum;
}