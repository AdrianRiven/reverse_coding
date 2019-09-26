#include<iostream>
using namespace std;
 int arr[700];
 int primes(){
     int index=0;
 for(int i=2;i<1000;++i){
    for(int j=2;j<(i/2);++j){
        if(i%j==0)
        goto ab;

    }
    arr[index]=i;
        index++;
      ab:
          ;

 }
 return 0;
 }
int main()
{primes();
all:
cout<<"Enter an integer:";
int sum=0;
int a;
cin>>a;
for(int j=0;arr[j];++j){
        ch:
        if(a%arr[j]==0){
            sum+=arr[j];
            a/=arr[j];
            goto ch;
        }




}
cout<<sum<<endl;
goto all;
return 0;

}