#include <bits/stdc++.h>

#define num 1000000007
#define formn(i,m,n) for(i=m;i<n;i++)
#define forn(i,n) for(i=0;i<n;i++)
#define fmno(i,m,n,o) for(i=m;i<n;i+=o)
#define ll long long

using namespace std;

int main() {
	long long i=0,j,k,n,t;
	cin>>n;
	while(n%2==0)
	{
		n/=2;
	}
	vector<int> a;
	while(n)
	{
		a.push_back(n%2);
		n/=2;
	}
	t=a.size();
	k=0;
	forn(i,t)
	{
		k+=pow(2,i)*a[t-i-1];
	}
	cout<<k;
	return 0;
}
