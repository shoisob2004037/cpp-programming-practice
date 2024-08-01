#include<iostream>
using namespace std;
int main()
{   int i,j,k,r;
    cout<<"enter row : ";
    cin>>r;
     for(i=1;i<=r;i++)
     {
     for(j=1;j<=r-i;j++)
     {
     cout<<"  ";
     }
     for(k=1;k<=i*2-1;k++)
    {
     cout<<"* ";
     }
     cout<<"\n";
     }
      for(i=r-1;i>=1;i--)
     {
     for(j=r-i;j>=1;j--)
     {
     cout<<"  ";
     }
     for(k=i*2-1;k>=1;k--)
    {
     cout<<"* ";
     }cout<<"\n";
     }}

