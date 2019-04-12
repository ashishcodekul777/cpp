#include<iostream>
#include<cmath>
using namespace std;
class printData
{
    private:
    void print(int i)
    {
        cout<<"\n Printing int:  "<<endl;
    }
    void print(float f)
    {
        cout<<"\n Printing float:  "<<endl;
    }
    void print(char* c)
    {
        cout<<"\n Printing char:   "<<endl;
    }
};
int main(void)
{
    printData pd;
    pd.print(5);
    pd.print(500.23);
    pd.print("ABC");
    return 0;
}

