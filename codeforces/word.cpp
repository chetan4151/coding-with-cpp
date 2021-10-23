#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int upper = 0, lower = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            upper++;
        else if (s[i] >= 'a' && s[i] <= 'z')
            lower++;
    }
    if (upper>lower)
    {
        for (int x=0; x<s.length(); x++){
            putchar(toupper(s[x]));
        }
    }
    else if (upper<lower)
    {
        for (int x=0; x<s.length(); x++){
            putchar(tolower(s[x]));
        }
    }
    else
    {
        for (int x=0; x<s.length(); x++){
            putchar(tolower(s[x]));
        }
    }
    return 0;
}