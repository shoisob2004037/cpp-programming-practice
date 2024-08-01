#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,a,fact=1;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        fact=fact*i;

    }
    cout<<fact;
}
