#include<iostream>
using namespace std;
class count
{
	private:
		int value;
	public:
		// constructor to initialize count to 5
		count(): value(5){}
		
	//overload ++ when used as prfix
	void operator++()
	{
		++value;
	}
	void display()
	{
		cout<<"count:"<<value<<endl;
	}
};
int main()
{
	  
	count(1));
	 // call the "void operator ++()" function ++ count 1;
	 count++ . display();
	 return 0;
}
