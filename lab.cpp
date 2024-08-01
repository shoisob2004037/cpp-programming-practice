#include<iostream>
#include<string.h>
using namespace std;
class student{
    public: string name;
    int roll;



};
int main()
{
    student s1,s2;
    s1.name="Shoisob";
    s1.roll=37;
    s2.name="Mehedi";
    s2.roll=12;
    cout<<s1.name<<" "<<s1.roll<<endl<<s2.name<<" "<<s2.roll<<endl;
}
