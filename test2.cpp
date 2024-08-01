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

};
int main()
{
  ETE shoisob;
  shoisob.id=2004037;
  shoisob.roll=37;
  shoisob.cg=3.68;
  shoisob.show();
  ETE shoiso;
  shoiso.id=2004038;
  shoiso.roll=38;
  shoiso.cg=3.58;
  shoiso.show();
  ETE shois;
  shois.id=2004039;
  shois.roll=39;
  shois.cg=3.48;
  shois.show();

}

