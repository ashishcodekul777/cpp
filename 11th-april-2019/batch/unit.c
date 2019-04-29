#include<stdio.h>
#include<math.h>
int main()
{
    int unit;
    float tamt;
    printf("\n Enter the units of electricity bills=  ");
    scanf("%d",&unit);
    if(unit<=50)
      tamt=unit*(0.50*10);
    else if(unit<=100)
      tamt=unit*(0.75*10);
    else if(unit<=150)
      tamt=unit*(1.20*10);
    else if(unit<=250)
      tamt=unit*(1.75*10)+(0.02*tamt);
    printf("\n  Total amount of bill=%f  ",tamt);
    return 0;  
}
