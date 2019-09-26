#include<bits/stdc++.h>
using namespace std;

bool isprime(int a){
	if(a==2){
		return true;
	}
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0) return false;
	}
	return true;
}
int main(){
	int a,ans=0;
	cin>>a;
	if(a==1){
		cout<<"0";
		return 0;
	}
	if(isprime(a)){
		cout<<a;
		return 0;
	}
	for(int i=2;i<a;i++){
		if(a%i==0 && isprime(i)){
			int tempa=a;
			ans+=i;
			tempa/=i;
			while(tempa%i==0){
				tempa/=i;
				ans+=i;
				
			}
		}
	}
	cout<<ans;
	}

