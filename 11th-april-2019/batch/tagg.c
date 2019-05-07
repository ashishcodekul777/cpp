#include<stdio.h>
#include<stdlib.h>
int main()
{
    char  str[100];
    int   c;
 
    printf("Enter a string= ");
    scanf("%s",str);

    for(c=0;  str[c]!='\0';  c++)
    {
        if(str[c]>='A' && str[c]<='Z')
            str[c]=str[c]+32;   
        else if(str[c]>='a' && str[c]<='z')
            str[c]=str[c]-32;   
    }
 
    printf("String after toggle each character = %s",str);
    return 0;
}
