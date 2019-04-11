#include<iostream>
#include<cmath>
using namespace std;
class movie
{
     public:
       string title;
       string director;
       sring rating;
      movie(string atitile,string adirector,string arating)
      {
         title=atitle;
         director=adirector;
         rating=arating;
      }
}
int main()
{
    movie avengers("The avengers","John Wisdon","PG-13");
    cout<<avengers.rating;
    return 0;
}      