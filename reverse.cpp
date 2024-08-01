#include <iostream>
using namespace std;
class rev
{
    public:
    void reverse(int n)
    {
        int sum=0, m;
        while(n!=0)
            {
            m=n%10;
            sum=sum*10+m;
            n=n/10;
            }
        cout<<"Reversed Number: "<<sum<<endl;
    }
};
    int main()
    {
        int r;
        cout<<"Enter a number for reverse :  ";
        cin>>r;

        rev t;
        t.reverse(r);
    }
