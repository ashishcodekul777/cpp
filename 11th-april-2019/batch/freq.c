#include<stdio.h>
#include<stdlib.h>
int main()
{
   char str[1000], ch[10];
   int i, frequency;

   printf("Enter a string= ");
   scanf("%s",str);
   printf("Enter a character to find the frequency= ");
   scanf("%s",ch);

   for(i = 0; str[i] != '\0'; ++i)
   {
       if(ch == '\0')
           ++frequency;
   }

   printf("Frequency of %s = %d", ch, frequency);

   return 0;
}

