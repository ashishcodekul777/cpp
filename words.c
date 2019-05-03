#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s[200];
    int count = 0, i;
    printf("Enter the string\n");
    scanf("%s",s);
    for (i = 0;s[i] != '\0';i++)
    {

        if (s[i] == ' ')
          count++;    
    }
    printf("number of words in given string are: %d\n", count + 1);
    return 0;
}