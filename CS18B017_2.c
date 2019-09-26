#include <stdio.h>

void main(){
    long int a;
    scanf("%ld",&a);
    int sum=0;
    int n=2;
    while(a!=1){
        if(a%n==0){
            sum=sum+n;
            a=a/n;
            continue;
        }
        n++;
    }
    printf("%d",sum);
}
