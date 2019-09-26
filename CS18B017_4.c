#include <stdio.h>

void main(){
    long int a;
    scanf("%ld",&a);
    while(a%2==0){
        a=a/2;
    }
    if(a==11){
        a=13;
    }
    else if(a==13){
        a=11;
    }
    if(a==23){
        a=29;
    }
    else if(a==29){
        a=23;
    }
    printf("%ld",a);
}
