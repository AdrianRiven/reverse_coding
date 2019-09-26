#include <iostream>
using namespace std;
int prime(int x){
	int b=0;
	for(int j=2;j<x;j++){
		if(x%j==0){
			b++;
			break;
		}
	}
	if(b==0)
		return 1;
	else
		return 0;
}
int count =0;
int main();

int mod(int x,int y){
	if((x%y)==0){
		count++;
		if((float)x/y==1.0){
			cout<<count*y;
			count=0;
			main();
		}
		mod(x/y,y);
	}
	return 0;
}
int main(){
	int a;
	while(1>0){
		cout<<"\nEnter an integer:";
		cin>>a;
		if(a==1 ||a==0){
			cout<<"0";
			continue;
		}
		if(prime(a)==1){
			cout<<a;
			continue;
		}
		for(int i=2;i<320;i++){
				mod(a,i);
		}
	}
	return 0;
}
