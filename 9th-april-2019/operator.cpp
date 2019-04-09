#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num1,num2;
    char op;
    cout<<"\n Enter the first nos=";
    cin>>num1;
    cout<<"\n Enter the second nos=";
    cin>>num2;
    cout<<"\n Enter the operator=";
    cin>>op;
    int result;
    if(op == '+')
     result=num1+num2;
    else if(op == '-')
     result=num1-num2;
    else if(op == '*')
     result=num1*num2;
    else if(op == '/')
     result=num1/num2;
    else if(op == '%')
     result=num1%num2;
    else
     cout<<"\n Invalid Operator";
     cout<<"\n Result=  "<<result;
     return 0;
}

