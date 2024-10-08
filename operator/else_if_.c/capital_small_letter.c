#include<stdio.h>
int main()
{
char ch;
printf("Enter a letter: ");
scanf("%c",&ch);
if(ch>='A' && ch<='Z')
        printf("Capital Letter");
else if(ch>='a' && ch<='z')
        printf("Small Letter");

else
        printf("Your Drunk");

return 0;
}