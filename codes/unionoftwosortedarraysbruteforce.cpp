#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6};
    int b[]={1,3,5,6,7,8};
    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(b)/sizeof(b[0]);

    set<int>st;
    for(int i=0;i<n1;i++)
    {
        st.insert(a[i]);
    }
    for(int i=0;i<n2;i++)
    {
        st.insert(b[i]);
    }

    vector<int> temp;
    for(auto it: st)
    {
        temp.push_back(it);
    }
    for(auto it:temp)
    {
        cout<<it<<" ";
    }
    return 0;
}