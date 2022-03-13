#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"Enter the number of element you want to enter";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        v.push_back(k);
    }
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}