#include<iostream>
using namespace std;
class count{
	private:
		int value;
	public:
		//Constructor to initialize count 5
		count():value(5){}
		
		//Overload ++ when used as prfix
		void operator ++(){
			++value;
		}
		void display(){
			cout<<"Count:"<< value << endl;
		}
};
int main() {
	count count1;
	
	//Call the "void operator ++()" function
	++count1;
	count1.display();
	return 0;
}
