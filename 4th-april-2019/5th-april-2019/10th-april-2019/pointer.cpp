#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int age=19;
    int *Page=&age;
    double gpa=4.5;
    double *Pgpa=&gpa;
    string name="Mike";
    string *Pname=&name;
    cout<<"\n Age= "<<*Page;
    cout<<"\n Name= "<<*Pname;
    cout<<"\n GPA= "<<*Pgpa;
    return 0;
}