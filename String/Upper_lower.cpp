
//Converting Uppercase to lowercase 
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char s[30];
	cout<<"Enter the the string\n";
	cin.getline(s,30);
	cout<<endl;
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]>=97 && s[i]<=122)
		{
			s[i]=s[i]-32;
		}
	}
	for(int j=0;s[j]!='\0';j++)
	{
		cout<<s[j];
	}
	getch();
	return 0;
}
