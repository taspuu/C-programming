#include<stdio.h>
#include<string.h>
int main()
{
  char s1[100],ch;
  int i,vowel,consonant,word,digit,others;
  i=vowel=consonant=word=digit=others=0;

  printf("Enter a string: ");
  gets(s1);

  while((ch=s1[i])!=0)
  {

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'|| ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
     {
        vowel++;
     }
    else if((ch>='a'&& ch<='z') || (ch>='A' && ch<='Z'))
        consonant++;

    else if(ch>='0' && ch<='9')
        digit++;

    else if(ch==' ')
        word++;
    
    else
    {
        others++;
    }

    i++; 
  }
   word++;
  
     printf("Vowel:%d\nConsonant:%d\nWord:%d\nDigit:%d\nOthers:%d\n",vowel,consonant,word,digit,others);

   getchar();
}