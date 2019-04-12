#include<stdio.h>
#include<stdlib.h>
int main()
{
    int c,n;
    printf("\n Random numbers in 1 to 100");
    for(c=1;c<=10;c++)
    {
        n=rand()%100+1;
        printf("\n %d  ",n);
    }
    return 0;
}