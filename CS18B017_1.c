#include <stdio.h>

long int gcd(int a,int b){
    if(a%b==0){
        return b;
    }
    long int temp;
    temp=a%b;
    a=b;
    b=temp;
    return gcd(a,b);
}

void main(){
    long int a,b,max,min;
    long int m;
    scanf("%ld %ld",&a,&b);
    max=a;
    min=b;
    if(b>a){
        max=b;
        min=a;
    }
    m=gcd(max,min);
    printf("%ld",(a+b)/m);
}
