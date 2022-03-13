#include<iostream>
#include<set>
using namespace std;
int main()
{
	set<pair<int,int>> s;
	s.insert(make_pair(10,2));
	s.insert(make_pair(20,3));
	s.insert(make_pair(100,20));
	s.insert(make_pair(50,65));
	s.insert(make_pair(40,25));
	s.insert(make_pair(45,56));
	s.insert(make_pair(85,47));
    	s.insert(make_pair(3,20));
	//s.erase(s.find(make_pair(20,3)));
	for(auto p:s)
	{
		cout<<p.first<<" and "<<p.second<<endl;
	}
	return 0;
}
