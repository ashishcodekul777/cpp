#include<iostream>
#include<cmath>
using namespace std;
    string DayofWeek(int dayNum)
    {
      string dayName;
       switch(dayNum)
       {
        case 1:
          dayName="Sunday";
        break;
        case 2:
          dayName="Monday";
        break;
        case 3:
         dayName="Tuesday";
        break;
        case 4:
         dayName="Wednesday";
        break;
        case 5:
         dayName="Thursday";
        break;
        case 6:
         dayName="Friday";
        break;
        case 7:
         dayName="Saturday";
        default:
         cout<<"\n Invalid Day number";
       }
      return dayName;
     }
    int main()
    {
        DayofWeek(7);
        return 0;
    }   



