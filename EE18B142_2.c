
#include <stdio.h>

int main(){
  int a, c=0;
 scanf("%d",&a);
for(int i=2;i<=a;)
{
if(a%i==0)
{
c+=i;
a/=i;
}
else i++;
}
printf("%d\n",c);

return(0);

  
}
