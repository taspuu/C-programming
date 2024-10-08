#include<stdio.h>
#include<string.h>
int main()
{
 char s1[]="Araf Ahamed";
 char s2[]="Araf Ahamed";
 int value=strcmp(s1,s2);
 if(value==0)
 {
    printf("Equal");
 }
 else
 {
    printf("Not Equal");
 }

 getchar();
}