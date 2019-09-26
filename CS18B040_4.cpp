#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

ll GCD( ll x, ll y) { if(y==0) return x; return GCD(y,x%y);}

int main()
{
  ll n,sum=0;
  cin>>n;
  while(n>0)
  {
    sum*=2;
    sum+=(n%2);
    n/=2;
  }
  cout<<sum<<'\n';
  return 0;
}
