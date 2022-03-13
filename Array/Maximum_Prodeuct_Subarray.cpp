#include<iostream>
#include<algorithm>
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
    long long int res=1,maxi = 1,mini = 1;
    for(int i=0;i<n;i++)
    {
        long long int x = a[i];
        if(x<0)
        {
            swap(mini,maxi);
        }
        mini = min(x,x*mini);
        maxi = max(x,x*maxi);
        res = max(res,maxi);
    }
    cout<<"Maximum Product is : "<<res;
    return 0;
}