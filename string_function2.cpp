#include<iostream>
using namespace std;
int main()
{
    string s="I want to have apple juice";
    int index = s.find("apple");
    cout<<index<<endl;
    string word = "apple";
    int len = word.length();
    cout<<len;
    s.erase(index,len+1); //+1 for removing extra space
    cout<<endl<<s<<endl;
    //Printing Iterative Method
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it;
    }
    return 0;
}