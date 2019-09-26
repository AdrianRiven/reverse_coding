#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

ll GCD( ll x, ll y) { if(y==0) return x; return GCD(y,x%y);}

int main()
{
  ll n,sum=0;
  cin>>n;
  for(ll i=2;i<=(ll)sqrt(n)+1;++i)
  {
    while(n%i==0)
    {
      sum+=i;
      n/=i;
    }
  }
  if(n!=1)
    sum+=n;
  cout<<sum<<'\n';
  return 0;
}
