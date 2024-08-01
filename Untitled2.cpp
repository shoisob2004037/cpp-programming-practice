#include<iostream>
using namespace std;
class sum
{
    int x,y;
public:
    void input()
{
    cin>>x>>y;
}
void add()
{
    cout<<"result is : "<<x+y;


    }

};
int main()
{
    sum s1;
    s1.input();
    s1.add();

}
