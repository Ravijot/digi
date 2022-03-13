#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int l = s.length();
    int i=0,j=l-1;
    while(i<j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    cout<<s;
    return  0;
}