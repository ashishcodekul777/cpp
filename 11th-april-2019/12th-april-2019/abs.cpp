#include<iostream>
#include<cmath>
using namespace std;
class adder
{
    public:
      Adder(int i=0)
      {
          total=i;
      }
      void addNum(int number)
      {
          total+=number;
      }
      int getTotal()
      {
          return total;
      }
      private:
       int total;
};
int main()
{
   adder A;
   a.addnum(10);
   a.addnum(20);
   a.addnum(30);
   cout<<"\n a.getTotal() "<<endl;
   return 0;
}