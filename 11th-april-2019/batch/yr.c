#include<stdio.h>
#include<math.h>
int main()
{
    int year;
    printf("\n Enter the leap year=  ");
    scanf("%d",&year);
    if(year%4==0)
     printf("\n It's a leap year");
    else
     printf("\n It's not a leap year");
    return 0;
}
    