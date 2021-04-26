#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int n1=0, i, n2=1, n3, sum=0, age, a[100];
	cout<<"enter your age ";
	cin>>age;
	while (n1<age)
	{
		n3=n1+n2;
		n1=n2;
		sum = sum + n1;
		n2=n3;
	}
	sum=sum-n1;
	cout<<"sum of all fibonacci numbers less than your age is "<<sum<<endl;
	for (i=0; sum>=1; i++)
	{
		a[i]=sum%2;
		sum = sum/2;
	}	
	cout<<"binary representation of sum is ";
	for (i=i-1; i>=0; i--)
	{
	
	      cout<<a[i];
	}      
	cout<<endl;
	return sum;
}

