#include<iostream>
using namespace std;
int main()
{
	string str1,str2; //declare the string variable
	
	cout<<"Enter the string 1:";
	cin>>str1;
	
	cout<<"Enter the string 2:";
	cin>>str2;
	
	//use campare() function to compare the second string with first string.
	
	if( str1 < str2 )
	{
		cout<<str1<<"is smaller than"<<str2<<"string"<<endl;
	}
	else if( str1 > str2 )
	{
		cout<<str1<<"is greater than"<<str2<<"string"<<endl;
	}
	else // str1 = str2;
	{
		cout<<"Both the strings are equal.";
	}
	return 0;
}
