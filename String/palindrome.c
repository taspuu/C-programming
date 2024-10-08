#include<stdio.h>
#include<string.h>
int main()
{

  char s1[]="mom";
  int size=sizeof(s1)/sizeof(s1[0]);
  char s2[size];
  
  
  strcpy(s2,s1);
  strrev(s2);
  char s4=strcmp(s1,s2);

  if(s4==0)
  {
    printf("Palindrome");
  }
  else 
  {
    printf("Not Palindrome");
  }

  getchar();
}