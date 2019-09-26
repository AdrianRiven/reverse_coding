#include<iostream>
using namespace std
int main()
{
	int a; 
	cin>>a;
	if (a%2==0)
	{
	while (a%2==0)
	{
		a=a/2;
	}
	cout<<a;
	}
	else
	{ 
		cout<< "maa chudayo";
	}
}
