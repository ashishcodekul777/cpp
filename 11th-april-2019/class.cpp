#include<iostream>
#include<cmath>
using namespace std;
class student
{
    public:
    int rollno;
    string name;
    float per;
};
int main()
{
    student S1;
    S1.rollno=101;
    S1.name="Ashish";
    S1.per=80.02;
    cout<<"\n Rollno= "<<S1.rollno;
    cout<<"\n Name=  "<<S1.name;
    cout<<"\n Perentage=  "<<S1.per;
    student S2;
    S2.rollno=301;
    S2.name="Paresh";
    S2.per=70.5;
    cout<<"\n Rollno=  "<<S2.rollno;
    cout<<"\n Nane=  "<<S2.name;
    cout<<"\n Percentage=  "<<S2.per;
    return 0;
}
