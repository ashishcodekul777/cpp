#include<iostream>
#include<cmath>
using namespace std;
class product
{
   public:
    int price;
    string name;
    int quantity;
    product(int Aprice,string Aname,int Aquantity)
    {
        price=Aprice;
        name=Aname;
        quantity=Aquantity;
    }
    void display()
    {
        cout<<"\n Price of product=  "<<price;
        cout<<"\n Name of product=   "<<name;
        cout<<"\n Quantity of product= "<<quantity;
    }
};
int main()
{
   product P1(2000,"Amazon Stick",20);
   return 0;
}