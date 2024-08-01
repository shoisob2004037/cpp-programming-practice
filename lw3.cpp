#include<iostream>
using namespace std;
class person
{
    private:string name;
    int age;
    public:string getname()
    {
        return name;
    }
    int getage()
    {
        return age;

    }
    void setname(string namenewvalue)
    {
        name=namenewvalue;
    }
    void setage(int agenewvalue)
    {
        if(agenewvalue<0)

        cout<<"Age Can't be Negative";

   age=agenewvalue;}
    void printdata()
    {
        cout<<endl;
        cout<<"Name : "<<name <<endl;
        cout<<"age"<<age<<endl;

    }
};
int main()
{
    person saif;
    saif.setname("Shoisob");
    saif.setage(20);
    saif.setage(-1);
    saif.printdata();
}
