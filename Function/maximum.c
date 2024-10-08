#include<stdio.h>

void maximum(int num[], int size)
{

    int max=num[0];

    for(int i=1;i<size;i++)
    {
       
       if(max<num[i])
       {
        max=num[i];

       }

    }
      printf("maximum number is %d",max);

       
}



int main(){

 int num[]={1,2,3,4,5,6,7,8,9,10};
 int size=sizeof(num)/sizeof(num[0]);
  maximum(num,size);
 
}