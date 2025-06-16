#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a={1,1,2,3,3,4,4};
    int n= a.size();
    for(int i=0;i<n;i++)
    {
        int num=a[i];
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]==num)
            {
                cnt++;
            }
        }
        if(cnt==1)
        {
            cout<<num;
        }
    }
    return 0;
}