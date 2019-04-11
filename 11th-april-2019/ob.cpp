#include<iostream>
#include<cmath>
using namespace std;
class add
{
    private:
      int m1,m2,m3,tot;
      float per;
    public:
      void accept()
      {
          cout<<"\n Enter the marks of 3 subjects=";
          cin>>m1>>m2>>m3;
      }
      void display()
      {
          tot=m1+m2+m3;
          per=(tot/3)*100;
          cout<<"\n Total= "<<tot;
          cout<<"\n Percentage=  "<<per;
      }  
};
int main()
{
    add A=new add();
    A.accept();
    A.display();
    return 0;
}
