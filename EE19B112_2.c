#include <stdio.h>

int main()
{
    int i, j,m, num, isPrime,k[100],sum=0;
    scanf("%d", &num);

    for(i=2; i<=num; i++)
    {
        if(num%i==0)
        {
            isPrime = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime==1)
            {
		printf("%d, ", i);
		sum+=i;
		}
		
        }
    }
printf("%d", sum);
    return 0;
}
