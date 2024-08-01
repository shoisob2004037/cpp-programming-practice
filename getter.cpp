#include<iostream>
using namespace std;

class square
{
    private: double side=2;
    public: double getside()
    {
        return side;
    }
};
int main ()
{
    square a;
    cout<<"Value of Side : "<<a.getside()<<endl;

    cout<<"Area is : "<<a.getside()*a.getside()<<endl;

    cout<<"perimeter is :  "<<a.getside()*4<<endl;

    return 0;
}

