#include<stdio.h>
int gcd(int a,int b){
	if(a%b==0)
		return b;
	else return gcd(b,a%b);
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int c=(a+b)/gcd(a,b);
	printf("%d",c+1);
}