#include <bits/stdc++.h>
using namespace std;
main()
{
   int n;
   cin>>n;
   int counter=0;
   for (int i = 1; i < n; i++) 
      for (int j = i; j < n; j++) 
         for (int k = j; k < n; k++)  
            if (n-i-j-k>=k) 
               counter++; 
   cout<<counter<<endl;
}
