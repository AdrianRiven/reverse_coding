#include <bits/stdc++.h>

#define num 1000000007
#define formn(i,m,n) for(i=m;i<n;i++)
#define forn(i,n) for(i=0;i<n;i++)
#define fmno(i,m,n,o) for(i=m;i<n;i+=o)
#define ll long long

using namespace std;
int ifprime(int n)
{
	int i;
	formn(i,2,n)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}

int main() {
	long long i=0,j,k,n,t;
	cin>>n;
	k=0;
	formn(i,2,n+1)
	{
		j=0;
		{
			if(n%i==0)
			{
				if(ifprime(i))
				{
					t=n;
					while(t%i==0)
					{
						t/=i;
						++j;
					}
					k+=i*j;
				}
				
			}
		}
	}
	cout<<k;
	return 0;
}
