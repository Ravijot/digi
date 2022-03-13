#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int rev = 0;
    int k = n;
    while(k>0)
    {
         rev=  rev*10 + k%10;
        k = k/10;
    }
    if(n == rev)
    {
        cout<<"Number is Pallindrome";
    }
    else
    {
        cout<<"Number is not Pallindrome";
    }
    return 0;
}