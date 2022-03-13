#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b)
{
    string val1 = to_string(a) + to_string(b);
    string val2 = to_string(b) + to_string(a);
    return val1>val2;
}
int main()
{
    int n;
    cout<<"Enter the number of elements you want to enter";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of Array";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,compare);
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return  0;
}