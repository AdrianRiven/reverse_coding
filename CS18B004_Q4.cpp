#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b=0,ans=0,pow=1;
	cin>>a;
	string s="";
	if(a==1){
		s+="1";
	}
	
	else{
		while(a){
		while(a%2==0 && b==0){
			a=a/2;
		}
		b=1;
		s+=to_string(a%2);
		a=a/2;
	}
}
	for(int i=s.length()-1;i>=0;i--){
		ans+=pow*(s[i]-'0');
		pow*=2;
	}
	
	cout<<ans;
}
