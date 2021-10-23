#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1;
    int i=0,count=0;
    cout<<"Enter something:";
    getline(cin,str1);
    while(str1[i]!='\0')
    {
        if (str1[i]==' ')
        {
            i++;
            continue;
        }
        else
        {
        count++;
        i++;
        }
    }
    cout<<"Length of string is "<<count;    
    return 0;
}