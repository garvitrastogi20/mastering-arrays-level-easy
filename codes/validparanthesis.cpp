#include<bits/stdc++.h>
using namespace std;

bool isvalid(string s)
{
    stack<char> st;
    int n= s.size();

    for(int i=0;i<n;i++)
    {
        if(s[i]=='{' || s[i]=='(' || s[i]=='[')
        {
            st.push(s[i]);
        }
        else{

            if(st.empty()) return false;

            if(st.top()=='{' && s[i]=='}' ||
            st.top()=='(' && s[i]==')' ||
            st.top()=='[' && s[i]==']'){
                st.pop();
            }
            else{
                return false;
            }
        }
    }
    return st.empty();
}

int main()
{
    string s="{[]()}";
    if(isvalid(s))
    {
        cout<<"Valid";
    }
    else{
        cout<<"Invalid";
    }
    return 0;
}
