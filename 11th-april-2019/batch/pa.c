#include<stdio.h>
#include<stdlib.h>
int prime(int n)
{
  int c=0;
  for(int i=1;i<=n;i++)
  {
    if(n%i==0)
    ++c;
  }
   if(c==2)
     return 1;
   else
     return 0;
}
int armstrong(int n)
{
  int dgt, sum=0,a=n;
 while(n!=0)
 {
    dgt=n % 10;
    sum=sum+(dgt*dgt*dgt);
    n=n/10;
 }
  if(sum==a)
   return 1;
  else
   return 0;
}

int perfect(int n)
{
  int sum=0;
for(int i=1;i<=n-1;i++)
{
  if(n%i==0)
  sum=sum+i;
}
  if(sum==n)
   return 1;
  else
   return 0;
}

int main()
{
  int num;
  printf(“\n Enter any number”);
  scanf(“%d”,&num);

  if(prime(num))
    printf(“\n It is prime number=%d ”, num);
  else
    printf(“\n It is not a prime number=%d”, num);

   if(armstrong(num))
     printf(“\n It is armstrong number=%d ”, num);
   else
     printf(“\n It is not armstrong number=%d ”, num);

   if(perfect(num))
     printf(“\n It is perfect number=%d”, num);
   else
     printf(“\n It is not perfect number=%d ”,num);
    return 0;
}
