#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
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
    unordered_map<string,int> hmap;
    for(auto i:v)
    {
       hmap[i]++;
    }
    for(auto i:hmap)
    {
        cout<<i.first<<" : "<<i.second<<endl;
    }
	return 0;
}
