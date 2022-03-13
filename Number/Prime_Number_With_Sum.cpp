#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"Enter the Lower Range : ";
    int low;
    cin>>low;
    cout<<"Enter the Upper Range : ";
    int high;
    cin>>high;
   for(int j=low; j<=high;j++)
   {
      int n = j;
      bool check = false;
      for(int i=2;i<= sqrt(n);i++)
      {
          if(n%i == 0)
          {
             check = true;
          }
       }
       if(check == false)
       {
          v.push_back(j);
       }
   }

   cout<<"Enter the Sum :";
   int x;
   cin>>x;
   int i=0,j=v.size()-1;
   while(i<j)
   {
       if(v[i]+v[j]>x)
       {
           j--;
       }
       else if(v[i]+v[j] <x)
       {
           i++;
       }
       else
       {
           cout<<v[i]<<" : "<<v[j];
           break;
       }
   }
   return 0;
}