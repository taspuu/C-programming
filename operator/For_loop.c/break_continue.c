#include<stdio.h>
int main(){

int i;

for(i=1;i<=20;i++)
  { if(i%3==0)
     continue; //bypass loop
    printf("%d\n",i);

    if(i==15)
    break;  //terminate
    }  
return 0;
}