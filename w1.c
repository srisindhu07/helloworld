#include<stdio.h>
int main()
{
   char ch;
   scanf("%c",&ch);
   if(ch>='a'&&ch<='z')
  {
    if((ch=='a'||ch=='A')||(ch=='e'||ch=='E')||(ch=='i'||ch=='I')||(ch=='o'||ch=='O')||(ch=='u'||ch=='U'))
    {
      printf("the input %c is a vowel",ch);
    }
    else
   {
     printf("the input %c is a consonant",ch);
    }
  }
     else
     if(ch>='o'&& ch<='9')
    {
      printf("the input %c is a digit",ch);
    }
   else
   {
     printf("the input %c is a special symbol",ch);
   }
}