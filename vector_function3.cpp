#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v{1,2,5,8,11,12};
	v.push_back(16);
    v.pop_back();
    v.insert(v.begin()+3,100);
    v.erase(v.begin()+2);
    int *p = v.data();
    cout<<*p<<endl;
    for(auto it:v)
    {
    	cout<<it<<" ";
	}
	cout<<"\nFront - "<<v.front();
	v.clear();//Remove all the elements of the array
	if(v.empty())
	{
		cout<<"\nVector is empty";
	}
	return 0;
}
