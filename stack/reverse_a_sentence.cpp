#include<bits/stdc++.h>
using namespace std;
void reverse(string s)
{
    stack<string> st;
    string word="";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]== ' ')
        {
            st.push(word);
            word="";
        }
        else
        {
            word+=s[i];
        }
    }
    st.push(word);
    while (!st.empty())
    {
        word=st.top();
        cout<<word<<" ";
        st.pop();
    }
    cout<<endl;
}
int main()
{
    string s ="This is Chetan Saini from Delhi";
    reverse(s);
    return 0;
}