#include <stdio.h>
int main()
{
    char ch;
    printf("\n Please Enter an alphabate= ");
    scanf("%c",&ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
		ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("\n It's a VOWEL",ch);
	}
    else
    {
        printf("\n It's is a CONSONANT",ch);
    }
   return 0;
}

