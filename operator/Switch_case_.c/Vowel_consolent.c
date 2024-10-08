#include<stdio.h>
int main(){

char vowel;
printf("Enter a letter: ");
scanf("%c",&vowel);

switch(vowel)
{
 /*case 'a' : printf("Vowel");
 break;
  case 'e': printf("Vowel");
 break;
 case 'i': printf("Vowel");
 break;
 case 'o': printf("Vowel");
 break;
 case 'u': printf("Vowel");
 break;
 default: printf("It's not Vowel");*/
 case 'a' :
 case 'e' :
 case 'i' :
 case 'o' :
 case 'u' :
 case 'A' :
 case 'E' :
 case 'I' :
 case 'O' :
 case 'U' :  
      printf("Vowel");
      break;
 default: 
      printf("Consonent");
}


return 0;
}