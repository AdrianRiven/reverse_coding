#include<stdio.h>
int factor(int a,int b)
{
int gcd;
for(int i=1; i <= a && i <= b; ++i)
    {
        if(a%i==0 && b%i==0)
            gcd = i;
    }
return gcd;
}
void main()
{
int a,b;
scanf("%d %d",&a, &b);
int c=a+b;
int d = factor(a,b);
int e=c/d;
printf("%d",e);
}

