#include<iostream>
using namespace std;

int prime( int a)
{
	int i, count =0;
	for (i-2; i<=a/2;++i)
	{
		if (a%i==0)
		{
			int y=1;
			break;
		}
	}
}
int gcd(int a, int b)
{
	if (b==0)
	{
		return a;
	}
	return gcd(b,a%b);
}
int commDiv(int a, int b)
{
	while (gcd(a,b)!=1)
	{
	int n=gcd(a,b);	
	int a=a/n;
	int b=b/n;
	int x=a+b;
	}
}
int main()
{
	int a; int b;
	cin>>a>>b;
	int y=prime(a);
	int z=prime(b);
	if ( gcd(a,b)==1)
	{
		cout<<int (a+b);
		return 0;
	}
	if (z==1 || y==1)
	{
		int x= commDiv(a,b);
		cout<<x+1;
		return 0;
	}
	else
	{
		int w=commDiv(a,b);
		cout<<w;
	}
}
