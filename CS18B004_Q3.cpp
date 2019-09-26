#include<bits/stdc++.h>
using namespace std;
bool isvowel(char a){
	if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U') return true;
	return false;
}
bool isvalid(char a,char b){
	if((isvowel(a)&&!isvowel(b))||(isvowel(b)&&!isvowel(a))){
		return true;
	}
	else return false;
}
int main(){
	int ans=1;
	string s;
	cin>>s;
	for(int i=0;i<s.length()-1;i++){
		if(isvalid(s[i],s[i+1])){
			ans++;	
		}	
	}
	cout<<ans;
}
