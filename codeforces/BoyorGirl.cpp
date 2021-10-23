#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int count=0,i=0;
    cin>>s;
    step1: while(i<s.length())
    {
        for (int j = 1; j < s.length(); j++)
        {
            if (s[i]==s[j])
            {
                i++;
                goto step1;
            }
        }
        i++;
        count++;

    }
    if (count%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
    return 0;
}