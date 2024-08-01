#include<iostream>
#include<string.h>
using namespace std;
class student{
    public: string address;
    int roll;
    string phone;



};
int main()
{
    student saif,siam;
    saif.address="RAJSHAHI";
    saif.roll=11;
    saif.phone="01850000000";
    siam.address="DHAKA";
    siam.roll=12;
    siam.phone="01905000000";
    cout<<saif.address<<" "<<saif.roll<<" "<<saif.phone<<endl;
    cout<<siam.address<<" "<<siam.roll<<" "<<siam.phone<<endl;
}

