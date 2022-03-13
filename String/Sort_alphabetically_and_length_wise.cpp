#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool compare(string s1,string s2)
{
	if(s1.length()<s2.length())
	{
		return true;
		
	}
	return s1>s2;
}

int main()
{
	string s[10]={"Mango","Banana","Apple","Pineapple"};
	sort(s,s+4,compare);
	for(int i=0;i<4;i++)
	{
		cout<<s[i]<<" ";
	}
	
	return 0;
}
