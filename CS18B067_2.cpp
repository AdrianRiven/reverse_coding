#include <iostream>
using namespace std;
/*bool prime(int n)
{
    ctr=0;
    int i;
    for(i=2;i<=sqrt(n);i++)
}*/
int main()
{
    int n;
    int ans=0;
    cin>>n;
    int k=2;
    while(1)
    {
        if(n%k==0)
           {ans+=k;n/=k;}
        else
            k++;
        if(n==1)
        {
            cout<<ans;return 0;
        }


    }
    return 0;


}
