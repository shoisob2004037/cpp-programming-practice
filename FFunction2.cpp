
#include<iostream>
using namespace std;
class rectangle{
    private:int width,height;
    public:
    rectangle(int x,int y)
    {
         width=x;
         height=y;
    };
friend void equal(class rectangle a,class square b,class triangle c,class trapiziam d);
};

class square{
private: int r;
public:
square(int x)
{
    r=x;
};
friend void equal(class rectangle a,class square b,class tringle c,class trapiziam d);
};
class triangle{
    private:int width,height;
    public:
    triangle(int x,int y)
    {
         width=x;
         height=y;
    };
friend void equal(class rectangle a,class square b,class triangle c,class trapiziam d);
};
class trapiziam{
    private:int width,width2,height;
    public:
    triangle(int x,int y,int z)
    {
         width=x;
         width2=y
         height=z;
    };
friend void equal(class rectangle a,class square b,class triangle c,class trapiziam d);
};
void equal(rectangle a,square b,triangle c,trapiziam d)
{
    if(a.width*a.height==b.r*b.r)
        cout<<"Equal"<<endl;
    else
        cout<<"Unequal"<<endl;

}
int main()
{
    rectangle a1(20,5);
    square b1(10);
    triangle(10,5);
    equal(a1,b1);

}


