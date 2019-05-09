#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,*q,first,second,sum,sub,mul,di;
    printf("\n Enter the two integers=  ");
    scanf("%d%d",&first,&second);
    p=&first;
    q=&second;
    sum=*p + *q;
    sub=*p - *q;
    mul=*p * *q;
    di=*p / *q;
    printf("\n *p + *q=%d  ",sum);
    printf("\n *p - *q=%d  ",sub);
    printf("\n *p * *q=%d ",mul);
    printf("\n *p / *q=%d  ",di);
    return 0;
}



