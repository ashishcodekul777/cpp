#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void copystr(char*,char*);
int main()
{
             char *str1="I am Ashish Rao";
             char str2[30];
             copystr(str2,str1);
             printf("\n %s",str2);
            return 0;
}
void copystr(char *dest,char *src)
{
                while(*src!='\0')
                *dest++=*src++;
                *dest='\0';
}