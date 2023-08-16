#include<iostream>
using namespace std;

//function to check vowel
//returns true of any character below is matched
bool isVowel(char ch){
	ch=toupper (ch);
	return ( ch=='A' || ch=='E' || ch=='I' ||  ch=='O' || ch=='U');
	}
	
	//to count total number of vowel fom 0 to n
	int countVowels(string str, int n){
		if (n==0)
		return isVowel(0);
		
		return countVowels(str,n-1)+isVowel(str[n]);
	}
	//main function
	int main()
	{
		//string object
	string str="prepinsta";
	
	int len= str.length();
	
	//Total numbers of Vowel
	cout<<"Vowels in "<<str<<":";
	
	//sending len-1 as last character will be at that position.
	}
