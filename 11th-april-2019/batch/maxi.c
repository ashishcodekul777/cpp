#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\n Enter the 3 nos= ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
      printf("\n A is the largest nos");
    else if(b>a && b>c)
      printf("\n B is the largest nos");
    else
      printf("\n C is the largest nos");
     return 0;
}