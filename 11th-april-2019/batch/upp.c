#include<stdio.h>
#include<string.h>
int main()
{
  char str[20];
  int i;
  printf("Enter the String= ");
  scanf("%s",str);
  for(i=0;i<=strlen(str);i++)
  {
	    if(str[i]>=97 && str[i]<=122)
	    {
		   str[i]=str[i]-32;
	    }
  }
  printf("\nThe String in Uppercase = %s",str);
  return 0;
}
