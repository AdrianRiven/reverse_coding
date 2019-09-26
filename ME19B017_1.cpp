#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int a,b;
	while(1>0){	
		cout<<"\nEnter two numbers separated by a space:";
		cin>>a>>b;
		if(a>100000 || b>100000){
			exit(0);
		}
		if(a==0 && b==0){
			exit(0);
		}else if(a==0 || b==0){
			cout<<"1";
		}else if(a==b){
			cout<<"2";
		}else if(a%2==0 && b%2==0){
			cout<<(a+b)/2;
		}else{
			cout<<a+b;
		}
	}
	return 0;
}
