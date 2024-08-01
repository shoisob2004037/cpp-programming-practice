#include<iostream>
 using namespace std ;
 class cal
 {
 private :
 int a ;
 int b ;
 public :
 int geta ()
 {
 return a ;
 }
 int getb ()
 {
 return b ;
 }
 void seta ( int aNewValue )
 {
 a = aNewValue ;
 }
 void setb ( int bNewvalue )
{
 b = bNewvalue ;
 }
 void printSum ()
 {
 cout<< " Summation is : " <<a+b << endl ;
 }
void printSub ()
 {
cout << " Subtraction is  : " <<a-b << endl ;
 }
void printMulti ()
 {
 cout << " Multiplication is : " <<a*b << endl ;
 }
 void printDiv ()
 {
 cout << " Division is : " <<a/b<< endl ;
 }
 };
 int main ()
 {
 int x , y ;
 cout << " Enter a number X : " ;
 cin >> x ;
 cout << " Enter another number Y : " ;
 cin >> y ;

 cal a ;
 a . seta ( x ) ;
 a . setb ( y ) ;
a . printSum () ;
 a . printSub () ;
 a . printMulti () ;
  a . printDiv () ;
 }
