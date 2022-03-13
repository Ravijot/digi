#include<iostream>
using namespace std;
void rotate(int a[],int start,int end)
{
    while(start<end)
    {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    rotate(a,0,k-1);
    rotate(a,k,n-1);
    rotate(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}