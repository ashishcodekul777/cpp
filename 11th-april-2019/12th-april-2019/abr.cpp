#include<iostream>
#include<cmath>
using namespace std;
class fine
{
    private:
      int x,y,z;
    public:
      void accept()
      {
          cout<<"\n Enter the 2 nos=  ";
          cin>>x>>y;
      }
      void display()
      {
          z=x;
          x=y;
          y=z;
          cout<<"\n After Swapping X=  "<<x;
          cout<<"\n After Swapping Y=  "<<y;
      }
      return 0;    
}
