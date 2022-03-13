#include<iostream>
#include<set>
#include<map>
using namespace std;
int main()
{
    set<pair<int,int> > s;
    map<int,int>  hash;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(hash[x-a[i]] >= 1)
        {
            s.insert(make_pair(a[i],x-a[i]));
        }  
        hash[a[i]]++;
    }
    if(s.empty())
    {
        cout<<"True";
    }
   for(auto p:s)
	{
		cout<<p.first<<" and "<<p.second<<endl;
	}
    return 0;
}