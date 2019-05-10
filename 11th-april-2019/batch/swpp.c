#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,*q,*r,first,second;
    printf("\n Enter the two nos=  ");
    scanf("%d%d",&first,&second);
    p=&first;
    q=&second;
    *r=*p;
    *p=*q;
    *q=*r;
    printf("\n After Swapping  P= %d ",*p);
    printf("\n After Swapping  Q= %d ",*q);
    return 0;
}
