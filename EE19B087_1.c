#include<stdio.h>
long f(int a, int b)
{
	if(a==b)
		return 2;
	else if(a*b<0)
		return -1;
	else if(a*b==0)
		return 1;
	else if(a<0)
		return -(a+b);	
	else 
		return a+b;
}
int main()
{
	long a,b;
	scanf("%ld %ld",&a,&b);
	printf("%ld\n",f(a,b));	
	return 0;
}
