#include<stdio.h>
#include<string.h>
int main(){
   char s1[20]="Araf";
   char s2[20]="Ahamed";
   char temp[20];

   printf("Before swapping:\n");
   printf("%s\n",s1);
   printf("%s\n",s2);

   strcpy(temp,s1);
   strcpy(s1,s2);
   strcpy(s2,temp);
   
   printf("After swapping:\n");
   printf("%s\n",s1);
   printf("%s\n",s2);

getchar();
}