#include<iostream>
#include<string>
using namespace std;
int main()
{
    int hash[256];
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        hash[s[i]]++;
    }
    string ans="";
    for(int i=0;i<s.length();i++)
    {
        if(hash[s[i]]>=1)
        {
             hash[s[i]] = 0;
            ans +=s[i];
        }
        
    }
    cout<<ans;
    return 0;
}