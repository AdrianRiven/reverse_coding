#include<stdio.h>
#include<stdlib.h>

void main()
{
	
	long int a, b, hcf=0;
	scanf("%ld %ld", &a, &b);
	for (int i = 1; i<=a&&i<=b;++i)
	{
		if(a%i==0&&b%i==0)
			hcf=i;
	}
	printf("%ld",((a+b)/hcf));
}

