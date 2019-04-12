#include<iostream>
#include<cmath>
using namespace std;
class Shape
{
   public:
      void setWidth(int w)
      {
          width=w;
      }
      void setHeight(int h)
      {
          height=h;
      }
      protected:
       int width;
       int height;
};
class Rectangle public Shape
{
      public:
       int getArera()
       {
           return (width*height);

       }
};
int main(void)    
{
     Rectangle Rect;
     Rect.setWidth(5);
     Rect.setHeight(7);
     cout<<"\n Total Area=  "<<Rect.getArea();
     return 0;
}
   


         