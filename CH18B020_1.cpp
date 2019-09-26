#include <bits/stdc++.h>

#define num 1000000007
#define formn(i,m,n) for(i=m;i<n;i++)
#define forn(i,n) for(i=0;i<n;i++)
#define fmno(i,m,n,o) for(i=m;i<n;i+=o)
#define ll long long

using namespace std;
 
#include <iostream> 
using namespace std; 
int gcd(int a, int b) 
{ 
	if (b == 0) 
		return a; 
	return gcd(b, a % b); 
	
} 

// Driver program to test above function 
int main() 
{ 
	int a,b;
	cin>>a>>b; 
	cout<<(a+b)/gcd(abs(a),abs(b));
	return 0; 
} 

