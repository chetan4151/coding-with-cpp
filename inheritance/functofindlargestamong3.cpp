#include<iostream>
using namespace std;
int func(int a,int b,int c)
{
   
   if(a>b) 
   {
      if(a>c)
      cout<<a<<" is the largest number";
      else
      cout<<c<<" is the largest number";
   }
   else 
   {
      if(b>c)
      cout<<b<<" is the largest number";
      else
      cout<<c<<" is the largest number";
   }
}
int main()
{
    int a,b,c;
    cout<<"Enter values of a,b and c:";
    cin>>a>>b>>c;
    func(a,b,c);
    return 0;
}