#include<stdio.h>
#include<stdlib.h>


int prime(int a)
{
int c=0;
for(int i=1;i<=a;i++)
{
if(a%i==0)
c++;
}
if(c==2)
return 1;
else
return 0;
}

int power(int x,int y)
{
int prod=1;
for(int i=1;i<=y;i++)
{
prod=prod*x;
}
return prod;
}


int main()
{
int n;
int a[168];
int d=0;
scanf("%d",&n);
if(prime(n)==1)
{
printf("%d",n);
}
else
{
for(int i=1;i<=1000;i++)
{
if(prime(i)==1)
{a[d]=i;
d++;}
}
int e[168];
for(int i=0;i<168;i++)
{
for(int j=0;j<10;j++)
{
if(n%(power(a[i],j))==0)
{
e[i]=j;
}
}
}
int sum=0;
for(int j=0;j<168;j++)
{
sum+=a[j]*e[j];
}

printf("%d\n",sum);
}
return 0;
}


