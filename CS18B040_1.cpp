#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

ll GCD( ll x, ll y) { if(y==0) return x; return GCD(y,x%y);}

int main()
{
  ll a,b,g;
  cin>>a>>b;
  g=GCD(a,b);
  a/=g;
  b/=g;
  cout<<a+b<<endl;
  return 0;
}
