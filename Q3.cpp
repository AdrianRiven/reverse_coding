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
    //cout<<"With a mind confused about it's ways of life and a bleak future ahead, our hero was turning paranoid and chronophobic. He started losing happiness in every possible way.";
    //cout<<" He was turning mad. The depression that started kicking in never let him sleep, and anxiety kicking in tried to push him out of everything except sleeping.";
    //cout<<" He was completely burnt out. He losing his cause to live.\n";
    //cout<<"On a positive note, he was beginning to master his fake smiles. :P\n";
    //cout<<"The darkness soon became a part of his life. He held on to the basics of good and bad. Whatever things are might be one of the two, and the embraced them all together. He wa trying to find some light.\n\n";
    //while(true)
    //{
        //cout<<"Enter a string (without blank spaces and all capitals):";
        string s;
        cin>>s;
        int ans=1;
        for(int i=1;i<s.size();i++)
            if(vowel(s[i])!=vowel(s[i-1]))
                ans++;
        //cout<<"The result is: ";
        cout<<ans;
        //cout<<endl<<endl;
    //}
    return 0;
}