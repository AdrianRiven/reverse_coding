



#include<bits/stdc++h>


using namespace std;

int c,d;


int f(int a, int b){

    if(a<0){a=-a;}
    if(b<0){b=-b;}
    
    

    if (b<=a)
    {c =b;
     d =a;}

    else 
    {
        c=a;
        d=b;
    }



    if (d%c==0)
    {
        return (c+d)/c;
    }
    else
    {
        return c+d;
    }

    return 0;
  
}




 int main(){
  int a, b;
  cin>>a>>b;
  cout<<f(a,b)<<endl;
  return 0;
}