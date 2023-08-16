#include<iostream>
using namespace std;
class box
{
	private:
		int length;
	public:
		Box(): length(0){}
		friend int; //friend function
};
int printlength(Box b);
{
	b. length+=10;
	return b. length;
}
int main()
{
	Box b;
	cout<<"Length of box:"<< printLength(b)<<endl;
	return 0;
}
