#include<iostream>
#include<cmath>
using namespace std;
class student
{
    public:
      string name;
      int rollno;
      double gpa;
      student(string Sname,int Srollno,double Sgpa)
      {
          name=Sname;
          rollno=Srollno;
          gpa=Sgpa;
      }
      bool hashonors()
      {
          if(gpa>2.0)
            return true;
          else
            return false;  
      }
};
int main()
{
    stusent S1("Jim",101,4.5);
    student S2("Smith",301,2.5);
    cout<< student2.hashonors();
    return 0;
}
