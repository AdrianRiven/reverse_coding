
#include <stdio.h>

int main(){
  int a, b, c;
 scanf("%d %d",&a,&b);
 int x =a+b;
int y;
  int z=b;
for(int i=z;i>0;i--)
{
if((x%i==0)&&(b%i==0))
{
y=i;
break;
}
}
c=x/y;
printf("%d\n",c);

return(0);

  
}
