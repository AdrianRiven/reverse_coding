#include <iostream>

using namespace std;
long gcd(long a,long b)
{
    if(a==0)
        return b;
    if(b==0)
        return a;
        /*if(a>b)
    return(a%b,b);
    else*/
        return(gcd(b,a%b));

}
int main()
{
    long a,b;
    cin>>a>>b;
    long c=gcd(a,b);
    cout<<(a/c)+(b/c)<<endl;
    return 0;
}

