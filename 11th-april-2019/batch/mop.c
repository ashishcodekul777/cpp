#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,*q,first,second;
    float mod;
    printf("\n Enter the two integers=  ");
    scanf("%d%d",&first,&second);
    p=&first;
    q=&second;
    mod=*p % *q;
    printf("\n The modulas of two integer =%f",mod);
    return 0;
}

