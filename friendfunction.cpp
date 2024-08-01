#include<iostream>
using namespace std;
class rectangle{
    private:int width,height;
    public: rectangle(int x,int y)
    {
         width=x;
         height=y;
    };
friend void equal(class rectangle a,class square b);
};

class square{
private: int r;
public:
    square(int x)
{
    r=x;
};
friend void equal(rectangle a,square b);
};
void equal(rectangle a,square b)
{
    if(a.width*a.height==b.r*b.r)
        cout<<"Equal"<<endl;
    else
        cout<<"Unequal"<<endl;

}
int main()
{
    rectangle a1(10,10);
    square b1(10);
    equal(a1,b1);

}


