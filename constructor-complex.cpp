#include<iostream>
#include<string>
#include<math.h>
using namespace std;

class complex
{
    int a,b,c1,c2;

    public:complex(int x,int y)
    {
        a=x;b=y;
    }

  void PrintNumber()
    {
        cout<<"Complex number is : "<<a<<"-"<<b<<"i"<<endl;
    }
};

int main()
{
    complex c1(12,3);
    complex c2(5,3);

    c1.PrintNumber();
    c2.PrintNumber();
    return 0;
}
