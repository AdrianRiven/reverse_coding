#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> bin;
    while(n>0)
    {
        bin.push_back(n%2);
        n/=2;
    }
    int i;
    int ans=0,k=1;
    for(i=bin.size()-1;i>=0;i--)
    {
        //cout<<bin[i]<<" ";
        ans+=(k*bin[i]);
        //cout<<ans<<" ";
        k*=2;
    }
    cout<<ans;

    return 0;
}
