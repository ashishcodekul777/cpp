#include<stdio.h>
#include<math.h>
int main()
{
    int nos;
    printf("\n Enter the number=");
    scanf("%d",&nos);
    if(nos%5 && nos%11)
     printf("The given nos is divisible by 5");
    else
     printf("\n The given nos is divisible by 11");
     return 0;    
}