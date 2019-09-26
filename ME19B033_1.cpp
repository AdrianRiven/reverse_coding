#include<iostream>
using namespace std;
int main()
{
    ch:
cout<<"Enter two numbers separated by a space:";
int a, b;
cin>>a>>b;
if(a>b){
    if(a%b==0)
        cout<< (1 +(a/b));
    else
        cout<< a+b;
}

else{

    if(b%a==0)
        cout<< (1+(b/a));
    else
        cout<<a+b;
}
cout<<endl;
goto ch;
return 0;
}
