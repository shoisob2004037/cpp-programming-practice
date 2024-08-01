#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
class triangle {
    public: void print_area(int s1,int s2,int s3)
    {    double s=(s1+s2+s3)/2;
         double a=sqrt(s*(s-s1)*(s-s2)*(s-s3));

         cout<<"Perimeter is : "<<s<<endl<<"Area is : "<<a;
    };
};
int main()
    {
        cout<<"Enter three Sides of Traingle : ";
       triangle t;
        int s1,s2,s3;
cin>>s1>>s2>>s3;
if(s1+s2>s3 || s2+s3>s1|| s1+s3>s2)
{


        t.print_area(s1,s2,s3);
}
else
    cout<<"invalid";
}











