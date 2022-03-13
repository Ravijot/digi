#include<iostream>
#include<string>
using namespace std;
int main()
{
    char s[50];
    cin.getline(s,30);
    if(s[0]=='\0')
    {
        cout<<"String is Empty";
    }
    else
    {
        int count = 1;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]==' ' && s[i+1]!=' ')
            {
                count++;
            }
        }
        cout<<"Total Number of Words are:"<<count;
    }
    return 0;
}