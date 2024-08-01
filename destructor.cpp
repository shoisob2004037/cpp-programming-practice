#include<iostream>
using namespace std;
class person{
int A;
public:
    person()
{
    A=1996;
    cout<<"Constructor is called."<<endl;

}
~person()
{
    cout<<"Destructor is called."<<endl;
}

    };
    int main()
    {
        cout<<"S T A R T "<<endl;
        {
            person obj;
        }
        cout<<"Main End"<<endl;
    }

