#include <iostream>
using namespace std;
int main()
{
   int a,b,c;
   cout<<"Enter values of a,b and c:";
   cin>>a>>b>>c;
   if(a>b) 
   {
      if(a>c)
      cout<<a<<" is largest number";
      else
      cout<<c<<" is largest number";
   }
   else 
   {
      if(b>c)
      cout<<b<<" is largest number";
      else
      cout<<c<<" is largest number";
   }
   return 0;
}