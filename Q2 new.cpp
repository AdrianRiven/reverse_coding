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
    cout<<"It was late before our hero realised that realism was a bad idea. One who is not balanced enough to take positives and negatives and judge them in their right places should not try to be a neutral judge of life. The fine line that holds realism easily turns into pessimism.\nAt his prime form, our hero could just reduce anyone to dust and put him back to his components.";
    cout<<" It was not just about being brisk and happy. He had something else along in his life: happiness.";
    cout<<" He was both street smart and intellectual. He had great grades. He sang and danced really well. He was good at all sport, watched a lot of good TV and had a great heart. And with his coy and innocent looks and moves, he had every girl he could have.";
    cout<<"\nNow he's more of a silenced poor creature. He had lost his stuff, his energy, his will and his mind.\n";
    cout<<"However, there was always a hope that there was a ray of hope."<<endl<<endl;
    while(true)
    {

        cout<<"Enter an integer: "<<endl;
        int n;
        cin>>n;
        int n1=n;
        int ans=0;
        for(int i=2;i<=n1;i++)
            if(prime(i)==true)
                while(n%i==0)
                {
                    ans+=i;
                    n/=i;
                }
        cout<<"The result is: ";
        cout<<ans;
        cout<<endl<<endl;
    }
}