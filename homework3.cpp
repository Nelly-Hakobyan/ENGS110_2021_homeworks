#include <iostream>
#include <math.h>
using namespace std;
int main (void)
{
	float a, b, c, D, x, x1, x2;
	cout<<"a=";
	cin>>a;
	if (cin.fail())
	{cout<<"enter valid value for a"<<endl;
		return EXIT_FAILURE;}
	cout<<endl<<"b=";
	cin>>b;
	cout<<endl;
	if (cin.fail())
	{cout<<"enter valid value for b"<<endl;
		return EXIT_FAILURE;}
	x=-b/a;
	cout<<"x="<<x<<endl;

	cout<<"c=";
	cin>>c;
	if (cin.fail())
	{cout<<"enter valid value for c"<<endl;
		return EXIT_FAILURE;}
	cout<<endl;
	D=pow(b,2)-4*a*c;
	if(D>=0)
	{x1=(-b+pow(D,1/2))/(2*a);
		x2=(-b-pow(D,1/2))/(2*a);
		cout<<"x1="<<x1<<endl;
		cout<<"x2="<<x2<<endl;
	}
	else { cout<<"No solution"<<endl;}
	return 0;
}
