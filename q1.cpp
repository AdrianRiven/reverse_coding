#include <bits/stdc++.h>
using namespace std;
int GCD( int x, int y) { if(y==0) return x; return GCD(y,x%y);}
main()
{
   	int a,b;
   	cin>>a>>b;
   	cout<<(a+b)/GCD(a,b);
}
