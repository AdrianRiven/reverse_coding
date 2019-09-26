#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n)
{
    bool ret=true;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            ret=false;
    return ret;
}
int main()
{
    int n;
    cin>>n;
    int ans=0;
    for(int i=2;i<=n;i++)
        if(prime(i)==true)
            while(n%i==0)
            {
                ans+=i;
                n/=i;
            }
    cout<<ans;
}