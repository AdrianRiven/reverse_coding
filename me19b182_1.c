#include<stdio.h>
int main()
{
	int m , n , l,a;
	scanf("%d%d",&m,&n);
	l=n%m ;
	if (l==0)
	{	a= (m+n)/m;
			
	}
	else 
	{
		a= m+n ;

	}
	printf("%d\n",a);

}