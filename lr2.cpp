#include<iostream>
using namespace std;
int main()
{
 int n,a,b,c,d,e,f,sum;
 cout<<"Enter a 4 digit number where last two digit is roll number : ";
  cin>>n;
    a=n/1000;
    b=n%1000;
    c=b/100;
    d=b%100;
    e=d/10;
    f=d%10;
    sum=a+c+e+f;
    cout<<"Sum is : "<<sum;
}
