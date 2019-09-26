#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int sum=0;
	int i=2;
	while(i<=n && n>1)
	{
		while(n%i==0)
		{
			n=n/i;
			sum+=i;
		}
		i++;
	}
	cout<<sum<<endl;
}