#include<iostream>
#include<cmath>
using namespace std;
class shape
{
    public:
      void setWidth(int w)
      {
          width=w;
      }
      void setHeight(int h)
      {
          height=h
      }
    protected:
      int height;
      int width;
};
class Rectangle:public shape
{
    public:
     int getArea()
     {
         return(width*height);
     }
};
int main()
{
    Rectangle Rect;
    Rect.setWidth(5);
    Rect.setHeight(7);
    return 0;
}