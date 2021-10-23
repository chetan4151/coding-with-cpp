#include<bits/stdc++.h>
using namespace std;
void swap(char* a , char* b)
{
    char temp=*a;
    *a=*b;
    *b=temp;
}
string reverse(string st,int start,int end){
    while (start<end)
    {
        swap(&st[start],&st[end]);
        start++;
        end--;
    }
    return st;
}
int main()
{
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    cout<<"String before reversing: "<<str<<endl;
    cout<<"String after reversing: "<<reverse(str,0,str.length()-1);    
}
