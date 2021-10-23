#include<iostream>
#include<string>
using namespace std;
void reverse(string s)
{
    if (s.length()==0)//base case
    {
        return;
    }
    string ros = s.substr(1);//rest of string
    reverse(ros);
    cout<<s[0];
    
}
int main()
{
    string s;
    cin>>s;
    reverse(s);
    return 0;
}