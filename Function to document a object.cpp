#include<iostream>
using namespace std;
class Rectangle
{
private:
	int width;
	int length;
public:
	Rectangle()
	{
		width=5;
		length=10;
	}
void Area()
{
	cout<<"The area="<<width*length;
}
void operator ++()
{
	width++;
	length++;
}
};
int main()
{
Rectangle obj1;
obj1.Area();
++obj1;  //increases height and width by one
obj1.Area();
return 0;
}

