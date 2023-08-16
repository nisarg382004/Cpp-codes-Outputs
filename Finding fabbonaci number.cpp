#include<iostream>
using namespace std;
class fibbonaci
{
	public:
		fabbonaci(int num)
		{
			int a=0,b=1,t,j;
			cout<<"Enter the number : ";
			cin>>num;
			cout<<"the fabbonaci series is : "<<a<<b;
			for(j=1;j<=num;j++)
			{
				t=a+b;
				cout<<t;
				a=b;
				b=t;
			}
			cout<<"\n";
		}
};
int main()
{ 
	fibbonaci obj();
	return 0;
}
