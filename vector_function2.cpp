#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a(5,0); //vector a having 5 elements with five zeros in  it
    vector<int> b(a.begin(),a.end());
    vector<int>::iterator it;
    for(it=b.begin();it!=b.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"Size : "<<b.size();
    
    return 0;
}