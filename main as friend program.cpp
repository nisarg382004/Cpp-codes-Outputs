#include<iostream>
using namespace std;
class main_as_friend{
	int a,b;
	public:
		main_as_friend( int x , int y )
		{
			a=x;
			b=y;
		}
		friend int main();
};
int main(){
	main_as_friend ob(5,7);
	cout<<( ob.a + ob.b );
	return 0;
}
