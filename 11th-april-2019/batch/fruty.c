#include<stdio.h>
#include<stdlib.h>
int main()
{
    int c;
    char banana[20];
    char apple[20];
    char watermelon[20];
    printf("\n Enter the nos of bananas=");
    scanf("%s",banana);
    printf("n Enter the nos of apples=");
    scanf("%s",apple);
    printf("\n Enter the nos of watermelons=");
    scanf("%s",watermelon);
    c=banana+apple+watermelon;
    printf("\n\t The nos of fruits=%d",c);
    return 0;
}