#include<bits/stdc++.h>
using namespace std;
int f(int a){
    return a^(2*a);
  // return a+1;
  // this can be a possible answer which is syntactically correct
}
main(){
  int a;
  cin>>a;
  cout<<f(a)<<endl;
}
