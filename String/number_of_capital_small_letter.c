#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,capital,small,digit;
    i=capital=small=digit=0;
    printf("Enter string : ");
    gets(s);

    while(s[i]!='\0')
    {
     if(s[i]>='A' && s[i]<='Z')
     {
        capital++;
     }
     else if(s[i]>='a' && s[i]<='z')
     {
        small++;
     }
     else if(s[i]>='0' && s[i]<='9')
     {
        digit++;
     }
     i++;
    }
    printf("Capital : %d\nSmall : %d\nDigit : %d\n",capital,small,digit);

    getchar();
    }