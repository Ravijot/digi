#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    s.append("I Love C++");
    cout<<s;
    if(s.empty())
    {
        cout<<"\nString is Empty";
    }
    else
    {
        cout<<"\nString is not Empty";
    }
    s += " and Python";
    cout<<endl<<s<<endl;
    return 0;
}