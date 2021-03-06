#include<bits/stdc++.h>
using namespace std;
int prec(char a)
{
    if (a=='^')
    {
        return 3;
    }
    else if (a=='*' || a=='/')
    {
        return 2;
    }
    else if (a=='+' || a=='-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
string InfixToPostfix(string s)
{
    stack<char> st;
    string ans;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
        {
            ans+=s[i];
        }
        else if (s[i]=='(')
            st.push(s[i]);
        else if (s[i]==')')
        {
            while (!st.empty() && st.top()!='(')
            {
                ans+=st.top();
                st.pop();
            }
            st.pop(); 
        }
        else
        {
            while (!st.empty() && prec(s[i]) <= prec(st.top()))
            {
                ans+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        ans+=st.top();
        st.pop();
    }
    return ans;
}
int main()
{
    cout<<InfixToPostfix("a+b*(c^d-e)^(f+g*h)-i");
    return 0;
}