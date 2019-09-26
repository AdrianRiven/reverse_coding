#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	return (a%b==0)?b:gcd(b,a%b);
}
int main()
{
	///cout<<"There once used to be a crazy time in which a lot of people thought being an optimist was a great idea. Our hero didn't have an opinion though. He thought he's more of an realist.\nWell he isn't wrong.";
	//cout<<" Realism is really a better way of looking at life. He always took the postives and negatives, and tried to think rationally. He preferred mind over gut, prospect over judge, and thinks over feels. Two things getting togther doesn't imply their total strength is increased: a lot depends on the chemistry, or whatever else they seem to share."<<endl<<endl;
	//cout<<"Everything has it's own cost though, so does it even make sense?"<<endl<<endl;
	while(true)
	{
		int a,b;
		//cout<<"Enter two numbers seperated by a space: ";
		cin>>a>>b;
		int ans=(a+b)/gcd(a,b);
		//cout<<"The result is: "
		cout<<ans<<endl<<endl;
	}
}