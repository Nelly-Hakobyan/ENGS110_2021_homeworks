#include <stdio.h>
int main ()
{
	int n1=0, n2=1, sum=0, n3, age, i, a[100];
	printf("Enter your age: ");
	scanf("%d",&age);
	while (n1 < age)
	{
		n3=n1+n2;
		n1=n2;
		sum = sum + n1;
		n2=n3;
	}
	sum=sum-n1;
	printf("sum of all fibonacci numbers less than your age is: %d",sum);
	for (i=0; sum>=1; i++)
	{
		a[i]=sum%2;
		sum = sum/2;
	}	
	printf("\nbinary representation of sum is: ");
	for (i=i-1; i>=0; i--)
	{
	
	      printf("%d", a[i]);
	}      
	printf("\n");
	return sum;
}

