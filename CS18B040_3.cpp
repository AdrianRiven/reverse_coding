#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

ll GCD( ll x, ll y) { if(y==0) return x; return GCD(y,x%y);}

int main()
{
  ll sum=1;
  string s;
  cin>>s;
  bool flag,flag1;
  for(ll i=1,j=0;i<s.size();++i,++j)
  {
    if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
      flag=true;
    else
      flag=false;
    if(s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U')
      flag1=true;
    else
      flag1=false;
    if(flag1==!flag)
        sum++;
  }
  cout<<sum<<'\n';
  return 0;
}
