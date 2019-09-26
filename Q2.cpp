
#include<bits/stdc++h>
using namespace std;

int pyesno;

int prime(int a)
{
    int count=0;
    for(int i=2;i<a;i++)
    {
        if(a%i ==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        return 1;
    }

    else
    {
        return 0;
    }
    
}




int f(int a){
  
if(a<=0)          
{
    return 0;
}

else if(prime(a)==1)
{
    return a;
}



}



main(){
  int a;
  cin>>a;
  cout<<f(a)<<endl;
}