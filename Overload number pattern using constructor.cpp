#include<iostream>
using namespace std;
class pyramid
{
	private:
		int r,SHOW,no;
		public:
			pyramid()  //constructor
			{
				no=5;
			}
			void sol()
			{
				for 
				(r=1;r<=no;++r)
				{
					for(SHOW=1;SHOW<=r;++SHOW)
					{
						cout<<SHOW<<"";
					}
					cout<<endl;
				}
			}
			~pyramid()   //destructor
			{
				cout<<endl<<"object destoryed";
			}
};
int main()
{
	pyramid ob;
	ob.sol();
}
