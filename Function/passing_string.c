#include<stdio.h>

void display(char name[]){

int i=0;

while(name[i]!='\0')
{
  
    printf("%c\n",name[i]);
      i++;
}
}

int main()
{
    char name[]="suporna";
    display(name);
}