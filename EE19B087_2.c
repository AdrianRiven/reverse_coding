#include<stdio.h>
#include<stdlib.h>

int main()
{
	long a,sum=0;
	scanf("%ld",&a);
	for(long i=2; i<a; i++)
		if(a%i==0)
		{	
			long flag=0;
			for(long j=2; j<i; j++)
				if(i%j==0)
				{
					flag=1;
					break;
				}
			if(flag==0)
			{	
				long a1=a;
				while(a1%i==0)
				{
					sum+=i;
					a1/=i;
				}		
			}
		}
	printf("%ld\n",sum);
	return 0;
}
