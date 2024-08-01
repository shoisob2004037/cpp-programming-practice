#include<iostream>
#include<string>
#include<math.h>
using namespace std;

   class factorial
   {
   public: int a;
   };
   int fact(int x)
        {
         int i,f=1;

         for(i=1;i<=x;i++){
           f=f*i;
         }
            return f;
        }
int main()
{
    factorial fq;
    cout<<"Enter a number: ";
    cin>>fq.a;
    cout<<"Factorial of "<<fq.a<<" is: "<<fact(fq.a)<<endl;;
    return 0;
}
