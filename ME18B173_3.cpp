#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

#define mod 1000000007
#define forn for(int i=0;i<n;i++)
#define vi vector<int>
#define ll long long
#define vll vector<ll>

int main()
{
    string s;
    cin >> s;
    int cnt = 1;
  
    for(int i=1;i<s.length();i++){
        if(((s[i-1] != 'A') && (s[i-1] != 'E') && (s[i-1] != 'I') && (s[i-1] != 'O') && (s[i-1] != 'U')) && ((s[i] == 'A') || (s[i] == 'E') || (s[i] == 'I') || (s[i] == 'O') || (s[i] == 'U')))
        {
            cnt++;

        }
        else if(((s[i-1] == 'A') || (s[i-1] == 'E') || (s[i-1] == 'I') || (s[i-1] == 'O') || (s[i-1] == 'U')) && (s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U'))
        { cnt++;
        }    
        


    }
    cout << cnt << endl;
    


    return 0;
}