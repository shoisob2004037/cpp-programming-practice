#include<iostream>
using namespace std;
class number
{
    public:
        int i;
        void num(int n)
        {
            for(int i=1;i<=n;i++)
            {
                cout<<i<<"\t";
            }
        }
};
int main()
{
    int n;
    cout<<"Enter value of n :"<<endl;
    cin>>n;
    number x;
    x.num(n);
}
