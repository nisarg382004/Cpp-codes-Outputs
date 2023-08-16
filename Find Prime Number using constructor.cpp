#include<iostream>
// Prime Class Declaration
using namespace std;
class Prime {
	//Member Variable Declaration
	int a,k,i;
	public: 
	//Parameterized Constructor definition 
	Prime(int x) {
		a=x;
		
		k=1;
		{
			for (i=2;i<=a/2;i++)
			if (a % i==0){
				k=0;
				break;
			} else {
				k=1;
			}
		}
	}
//Member Function show() for display result.
void show(){
	if (k==1)
	cout<<a<<"is Prime Number.";
	else
	cout<<a<<"is Not Prime Number.";
}
};
//Main Function 
int main(){
	int a;
	cout<<"Simple Parameterized Constructor For Prime Number Example Program In C++\n";
	cout<<"\nEnter the Number:";
	
	//Object Creation For Class and Initiate Value from the user input
	Prime obj(a);
	
	//Call Member Function show()
	obj.show();
	
	//Wait For Output Screen
	return 0;
	}
