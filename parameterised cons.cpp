#include<iostream>
#include<math.h>
using namespace std;

class complex
{
    int a,b,c,d;
    public: complex(int , int, int , int);
    void printNumber()
    {
        cout<<"First point : ("<<a<<","<<b<<")"<<endl;
        cout<<"Second point : ("<<c<<","<<d<<")"<<endl;
    }
     void printDistance()
    {
        cout<<"distance between two point:"<<sqrt(pow(a-c,2)+pow(b-d,2));
    }
};
complex:: complex(int x, int y, int m, int n)
{
    a=x;
    b=y;
    c=m;
    d=n;
}
int main()
{
    complex a(3,2,4,5);
    a.printNumber();
    a.printDistance();
}

