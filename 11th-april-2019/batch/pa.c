#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int isPrime(int num);
int isArmstrong(int num);
int isPerfect(int num);

int main()
{
    int num;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    if(isPrime(num))
    {
       printf("%d is Prime number.\n", num);
    }
    else
    {
        printf("%d is not Prime number.\n", num);
    }
    if(isArmstrong(num))
    {
        printf("%d is Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not Armstrong number.\n", num);
    }
    if(isPerfect(num))
    {
        printf("%d is Perfect number.\n", num);
    }
    else
    {
        printf("%d is not Perfect number.\n", num);
    } 
}    
int isPrime(int num) 
{
    int i;
    
    for(i=2; i<=num/2; i++)  
    {   
        if(num%i == 0)  
        {
            return 0;
        }  
    } 
    
    return 1; 
}
int isArmstrong(int num) 
{
    int lastDigit, sum, originalNum, cube;
    sum = 0;
    
    originalNum = num;
    while(num > 0)
    {
        lastDigit = num % 10;
        cube=lastDigit^3;
        sum=sum+cube;
        num = num / 10;
    }
    
    return (originalNum == sum);
}
int isPerfect(int num) 
{
    int i, sum, n;
    sum = 0;
    n = num;
    
    for(i=1; i<n; i++)  
    {  
        if(n%i == 0)  
        {  
            sum += i;  
        }  
    }
    return (num == sum);
}

 