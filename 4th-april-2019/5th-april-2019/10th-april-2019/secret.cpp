#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int secretNum=7;
    int guess;
    while(secretNum!=guess)
    {
        cout<<"\n Enter your guess=";
        cin>>guess;
    }
    cout<<"\n You win!";
    return 0;
}