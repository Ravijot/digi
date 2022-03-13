#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
bool compare(string a,string b)
{
    return a.length()<b.length();
}
int main()
{
    cout<<"Enter the number of strings you want to enter";
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        getline(cin,s[i]);
    }
    sort(s,s+n,compare);
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;
}