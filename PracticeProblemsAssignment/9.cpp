#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the values of a and b: ";
    cin>>a>>b;
    int temp=a;
    a=b;
    b=temp;
    cout<<"Swapped values of a and b are "<<a<<","<<b;
    return 0;

}