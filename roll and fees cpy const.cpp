#include<iostream>
using namespace std;
class student
{
	int rno;
	double fee;
	public:
	student(int,double);
	student(student &t)	 //copy constructor
	{
		rno=t.rno;
		fee=t.fee;
	}
	void display();

};
	student::student(int no,double f)
	{
		rno=no;
		fee=f;
	}
void student::display()
	{
		cout<<endl<<"Roll: "<<rno<<"\t"<<"\t"<<"Fee: "<<fee<<"tk";
	}
int main()
{
	student s(2004009,2000);
	s.display();

	student std(s); //copy constructor called
	std.display();
	return 0;

}
