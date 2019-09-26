#include<iostream>
#include<string>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
bool vowel(char c)
{
    if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        return true;
    else return false;
}
int main()
{
    string s;
    cin>>s;
    int ans=1;
    for(int i=1;i<s.size();i++)
        if(vowel(s[i])!=vowel(s[i-1]))
            ans++;
    cout<<ans;
    return 0;
}