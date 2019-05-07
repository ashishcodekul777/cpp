#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100];
  	int i, totalwords;
 
  	printf("\n Please Enter any String=  ");
  	scanf("%s",str);
  	 	   	
  	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			totalwords++;	
		} 
	}	
	printf("\n The Total Number of Words in this String %s  = %d", str, totalwords);
	
  	return 0;
}
