#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
bool compare(pair<int,int> a,pair<int,int> b)
{
    return a.second>b.second;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map<int,int> hmap;
    for(int i=0;i<n;i++)
    {
        hmap[a[i]]++;
    }
    vector<pair<int,int> > v;
    for(auto i:hmap)
    {
        v.push_back(make_pair(i.first,i.second));
    }
    sort(v.begin(),v.end(),compare);
   /* for(auto j:v)
    {
        cout<<j.first<<" : "<<j.second<<endl;
    }*/
    cout<<v[0].first<<" : "<<v[0].second;
    return  0;
}
/* vector<pair<int, string>> vec1 = {{12, "eleven"},
                                      {32, "thirty-two"},
                                      {6, "six"},
                                      {43, "forty-three"}};*/