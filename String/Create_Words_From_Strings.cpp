#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string s;
	cout<<"Enter the string";
	getline(cin,s);
	string word ="";
	vector<string> v;
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		{
			v.push_back(word);
			word = "";
		}
		else
		{
			word += s[i];
		}
	}
    v.push_back(word);
    for(auto i:v)
    {
        cout<<i<<endl;
    }
	return 0;
}
