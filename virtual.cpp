#include<iostream>
using namespace std ;
 class vehicle
 {
     private:
        public:
            virtual void make ()
 {
 cout << "Member function of base class vehicle accessed." << endl<<endl;
 }
 };
 class Wheeler :
     public vehicle
 {
 public : void make ()
{
 cout << "Virtual Member function of derived class Wheeler accessed." << endl ;
 }
 };
 int main ()
 {
 vehicle *a ,*b ;
 a = new vehicle () ;
 a -> make () ;
 b = new Wheeler () ;
 b -> make () ;
 return 0;
 }
