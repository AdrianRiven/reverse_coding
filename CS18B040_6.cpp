#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

ll GCD( ll x, ll y) { if(y==0) return x; return GCD(y,x%y);}

int main()
{
  ll n;
  cin>>n;
  cout<<(n^(n*2))<<'\n';
  return 0;
}
