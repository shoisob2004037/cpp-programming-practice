#include<iostream>
#include<math.h>
using namespace std;
class point
{    private: int x,y;
    public : point(int x1, int y1)
    {
    x=x1;
    y=y1;
    }
    point(const point &p1)
    {
        x= p1.x;
        y= p1.y;
    }
    int getx()
    {
        return x;
    }
    int gety(){
        return y;
    }
};
int main()
{
    point p1(10,15),p3(12,16);
    point p2 =p1;
    cout<<"p1.x ="<<p1.getx()<<"   ,p1.y="<<p1.gety()<<endl;
    cout<<"p2.x ="<<p2.getx()<<"   ,p2.y="<<p2.gety()<<endl;
    cout<<"p3.x ="<<p3.getx()<<"   ,p3.y="<<p3.gety()<<endl;

    cout<<"distance between two point:"<<sqrt(pow(p2.getx()-p3.getx(),2)+pow(p2.gety()-p3.gety(),2));
}
