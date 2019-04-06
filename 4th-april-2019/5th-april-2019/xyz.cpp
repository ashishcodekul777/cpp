#include<iostream>
using namespace std;
int main()
{
    string pularNoun,color,celebrity;
    cout<<"\n Enter the color=";
    getline(cin,pularNoun);
    cout<<"\n Enter the pularNoun=";
    getline(cin,color);
    cout<<"\n Enter the celebrity name=";
    getline(cin,celebrity);
    cout<<"\n Roses are "<<color;
    cout<<"\n Micro-waves are  "<<pularNoun;
    cout<<"\n I like "<<celebrity;
    return 0;
}