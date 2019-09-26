#include<bits/stdc++.h>

using namespace std;

	int primes[1001] ;
	
int* giveprimes(int num)
{	
	for(int i=0;i<num;i++)
	{
		primes[i]=i+1;
	}
	for(int i=1;i<num;i++)
	{	int checknum;
		//cout<<"in func"<<endl;
		checknum=i+1;
		//cout<<"check"<<checknum;
		for(int j=2*checknum - 1;j<=num;j+=checknum)
		{ 
			primes[j]=0;

		}

	}
	primes[0]=0;
	//cout<<"primes";
	
	//cout<<num<<endl;
 	//cout<<primes[0]<<endl;

	return primes;
}
int give_power(int a,int d)
{
	int count =0;
	while(a%d==0)
	{
		count++;
		a=a/d;
	}
	return count;
}

int main()
{	for(int i=0;i<1001;i++)
	{
		primes[i]=0;
	}

	long long int a,b ;
	cin>>a;
	int* primesa;
	primesa=giveprimes(a);


	int sum_primes=0;

	for(int i=0;i<a;i++)
	{
		if(primesa[i]!=0)
		{
			//if(a%primesa[i]==0)
			sum_primes+=give_power(a,primesa[i])*primesa[i];
		}
	}
	cout<<sum_primes<<endl;
	return 0;
}