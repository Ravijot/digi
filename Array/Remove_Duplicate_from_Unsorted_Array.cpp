#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
    map<int,int> hmap;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        hmap[a[i]]++;
    }
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        if(hmap[a[i]] >= 1)
        {
             hmap[a[i]] = 0;
           v.push_back(a[i]);
        }
      
    }
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    return 0;
}