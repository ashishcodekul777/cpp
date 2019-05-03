#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int i, words;

    printf("Enter any string: ");
    scanf("%s",str);

    i = 0;
    words = 1;

    while(str[i] != '\0')
    {
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            words++;
        }

        i++;
    }

    printf("Total number of words = %d", words);

    return 0;
}