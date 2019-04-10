#include<iostream>
#include<cmath>
using namespace std;
class Book
{
    public:
     string title;
     int pages;
     string author;
};
int main()
{
   Book B1;
   B1.title="Harry Potter";
   B1.pages=500;
   B1.author="J.K.Rowlling";
   cout<<"\n Book Name=  "<<B1.title;
   cout<<"\n Pages of book=  "<<B1.pages;
   cout<<"\n Author of book= "<<B1.author;
   return 0;
}