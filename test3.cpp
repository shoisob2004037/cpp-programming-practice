#include<iostream>
using namespace std;
class ETE
{
    public:
    int id;
    int roll;
    double cg;
    void show()
    {
        cout<<id<<" | "<<roll<<" | "<<cg<<endl;
    }
    void sett(int x,int y,double z)
    {
        id=x;
        roll=y;
        cg=z;

    }

};
int main()
{
  ETE shoisob;
  shoisob.sett(2004037,37,3.68);
  shoisob.show();
  ETE shoiso;
  shoiso.sett(2004030,30,3.88);
  shoiso.show();
  ETE shois;
  shois.sett(2004035,35,3.68);
  shois.show();

}


