#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
bool compare(pair<string,int> &a,pair<string,int>  &b)
{
     return a.second<b.second;
}
int main()
{
    vector< pair <string,int> > v;
    cout<<"Enter the number of elements you want to enter";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int k;
        string s;
        cin>>k>>s;
        v.push_back(make_pair(s,k));
    }
    for(auto i:v)
    {
        cout<<i.first<<" : "<<i.second<<endl;
    }
    sort(v.begin(),v.end(),compare);
    for(auto i:v)
    {
        cout<<i.first<<" : "<<i.second<<endl;
    }
    return 0;
}