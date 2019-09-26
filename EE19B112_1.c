#include<stdio.h>

int main()
{
int a,b,hcf1,hcf2;
scanf("%d %d",&a,&b);
if(a<=b)
{
for(int i=1;i<=a;i++)
{
if(a%i==0&&b%i==0)
{
hcf1=i;
}
}
printf("%d",(a+b)/hcf1);
}
if(a>b)
{
for(int i=1;i<=b;i++)
{
if(a%i==0&&b%i==0)
{
hcf2=i;
}
}
printf("%d",(a+b)/hcf2);
}

}

