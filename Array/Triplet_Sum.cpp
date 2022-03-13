#include<iostream>
#include<algorithm>
using namespace std;
void triplet_sum(int a[],int n,int x)
{
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        int target = x -a[i];
        int start = i+1;
        int end = n-1;
        while(start<end)
        {
            if(a[start] + a[end] > target)
            {
                   end--;
            }
            else if(a[start] + a[end] < target)
            {
                start++;
            }
            else
            {
                cout<<a[i]<<" : "<<a[start]<<" : "<<a[end];
                start++;
                end--;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the number of elements you want to enter";
    cin>>n;
    int a[n];
    cout<<"\nEnter the elements of Array";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nEnter the Target Sum:";
    int x;
    cin>>x;
    triplet_sum(a,n,x);
    return 0;
}