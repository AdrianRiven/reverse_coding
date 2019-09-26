#include<iostream>
using namespace std
int main()
{
	int a;
	int b[];
	cin>>a;
	for (i=2;i<=a;i++)
	{
		if (a%i==0)
		{
			b[i]=a/i;
		}
		else
		{
			b[i]=0;
		}
	}
	for (i=2;i<=a;i++)
	{
		int c=c+b[i];
	}
	cou<<c;
	return 0;
	
}
