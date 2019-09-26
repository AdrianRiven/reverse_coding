#include <stdio.h>

int f(char c){
    return (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    return 0;
}

void main(){
    char A[100000];
    scanf("%s",A);
    long int count=1;
    int m=0,n=0;
    if(f(A[0]==1)){
        m=1;
    }
    for(int i=1;A[i]!='\0';i++){
        m=f(A[i-1]);
        n=f(A[i]);
        if(m!=n){
            count++;
        }
    }
    printf("%ld",count);
}
