#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    set<int> s;
    for(int i=0;i<n;i++)
    {
         s.insert(a[i]);
    }
    for(set<int>::iterator it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}