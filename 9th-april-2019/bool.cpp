#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    bool isMale=true;
    bool isTall=true;
     if(isMale && isTall)
      cout<<"\n You are a tall male";
    else if(isMale && !isTall)
      cout<<"\n You are not a tall male";
    else if(!isMale && isTall)
      cout<<"\n You are tall but not male";
    else
      cout<<"\n you are not a male & you are not a tall";
    return 0;
}