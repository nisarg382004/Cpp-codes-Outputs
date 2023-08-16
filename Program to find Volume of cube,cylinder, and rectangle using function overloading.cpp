#include<iostream>
using namespace std;
const float pi=3.14;
float vol( float l ) //cube
{
	return l*l*l;
}
float vol( float r , float h ) //cylinder
{
	return (pi * r* r*h );
}
float vol ( float l, float b, float h )
{
	return (l*b*h);
}
int main()
{
	float l,b,r,h,t;
	cout<<"\nEnter the length of cube : \n";
	cin>>l;
	t=vol(l);
	cout<<"Volume of cube : "<<t;
	cout<<"\n\nEnter the radius and height of Cylinder :\n";
	cin>>r>>h;
	t=vol(r,h);
	cout<<"\n\nVolume of cylinder : "<<t;
	cout<<"\n\nEnter the Length , Breadth & Height of Rectangle : \n";
	cin>>l>>b>>h;
	t=vol(l,b,h);
	cout<<"\n\nVolume of Rectangle : "<<t;
	return 0;
}
