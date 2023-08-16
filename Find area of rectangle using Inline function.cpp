#include<iostream>
using namespace std;
inline int area(int a, int b)
{
	return(a*b);
}
int main()
{
	int a, b, ar;
	cout<<"Enter the length :";
	cin>>a;
	cout<<"Enter the breath :";
	cin>>b;
	cout<<"The area is :"<<area(a,b);
	return 0;
}
