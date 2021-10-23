#include<bits/stdc++.h>
using namespace std;
bool isValid(string s)
{
    stack<char> st;
    bool ans=true;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='(' or s[i]=='[' or s[i]=='{')
            st.push(s[i]);
        else if (st.empty())
        {
            ans=false;
            return ans;
        }
        else 
        {      
            if (s[i]==')' && st.top()=='(')
            {
                st.pop();
                ans=true;
                continue;
            }
            else if (s[i]==']' && st.top()=='[')
            {
                st.pop();
                ans=true;
                continue;
            }
            else if (s[i]=='}' && st.top()=='{')
            {
                st.pop();
                ans=true;
                continue;
            }
            else 
                return false;
        }
    }
    if (!st.empty())
    {
        return false;
    }
    return ans;
}
int main()
{
    if (isValid("[(])"))
        cout<<"Balanced Parenthesis";
    else
        cout<<"Unbalanced Parenthesis";
    return 0;
}