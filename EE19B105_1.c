#include<stdio.h>
#include<stdlib.h>


int hcf(int a,int b)
{
    int gcd;
    for(int i=1; i <= a && i <= b; ++i)
    {
        
        if(a%i==0 && b%i==0)
            gcd = i;
    }
    return gcd;
}

int main()
{
int n,m;
scanf("%d %d",&n,&m);
int a;
for(a=1000;a>0;a--)
{
if(hcf(n,m)==a)
printf("%d\n",(int)((n+m)/a));
}
return 0;
}

