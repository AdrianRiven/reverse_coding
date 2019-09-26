#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	int gcd1=__gcd(a,b);
	a/=gcd1;
	b/=gcd1;
	cout<<(a+b);
	}

