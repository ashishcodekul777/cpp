#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int secretNum=7;
    int guess;
    int guessCount=0;
    int guesslimit=3;
    bool OutofGuesses=false;
    while(secretNum!=guess && !OutofGuesses)
    {
        if(guessCount<guesslimit)
        {
            cout<<"\n Enter your guess=";
            cin>>guess;
            guessCount++;
        }
        else
        {
           OutofGuesses=true;
        }
    }
    if(OutofGuesses)
      cout<<"\n You are Win";
    else
      cout<<"\n You are lose";
      return 0;

}