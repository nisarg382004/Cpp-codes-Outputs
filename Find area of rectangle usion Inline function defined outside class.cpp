#include<iostream>
using namespace std;
class rectangle
{
	int length,breadth,area;
	public:
	void readvalues();
	void recarea();	
};
inline void rectangle::readvalues()
{
	cout<<"Enter length and breadth\n";
	cin>>length>>breadth;
}
inline void rectangle::recarea()
{
	area=length*breadth;
	cout<<"Area is :"<<area;
}
int main()
{
	rectangle r1;  //object creation
	r1.readvalues();  //function call using dot operator
	r1.recarea();    //recarea() function call
	return 0;	
}
