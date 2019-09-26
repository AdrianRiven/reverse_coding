#include<stdio.h>

int main()
{
	long x,y,z;
	
	scanf("%ld %ld",&x,&y);
	if(y!=0)
		{
	if(x%y==0 || y%x==0)
	{	
		if(x%y==0)
		{
				
			z= 1+x/y;
			printf("%ld",z);
		
		}
		else
		{	
			
			z= 1+y/x;
			printf("%ld",z);
		
		}
	}
		
	else
	{
		z=x+y;
		if(z<0)
		{
			z=-z;	
		}
		printf("%ld",z);
	}
}
}
