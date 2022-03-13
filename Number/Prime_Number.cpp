#include<iostream>
#include<math.h>
using namespace std;
int main()
{
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
          cout<<j<<",";
       }
   }
   
    return 0;
}