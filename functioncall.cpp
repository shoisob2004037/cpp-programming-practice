
#include<bits/stdc++.h>
using namespace std ;
typedef long long ll;
class factorial{
public :
    ll m ;};
int s=0;
ll fact ( ll m){
    s++;
    if (m==1) return 1;
    return m*fact(m-1) ;}
int main ()
{
    factorial f ;
    cout << "Input any Number : "<<endl ;
    cin >> f.m ;
    ll fl=fact (f.m);
    cout<<"Function call for  "<<s<<" times." ;
    return 0;
}
