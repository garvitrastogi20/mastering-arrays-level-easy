#include<bits/stdc++.h>
using namespace std;

vector<int> intersectionofarr(vector<int>a , vector<int> b)
{
    int n1= a.size();
    int n2= b.size();
    vector<int> intersecarr;
    vector<int> vis(n2,0);

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(a[i]==b[j] && vis[j]==0)
            {
                intersecarr.push_back(a[i]);
                vis[j]==1;
                break;
            }

            if(b[j]>a[i])
        {
            break;
        }
        }
    }
    return intersecarr;
}

int main()
{
    vector<int> a={1,2,3,4,9};
    vector<int> b={2,3,6,9,10};

    vector<int> intersecarr= intersectionofarr(a,b);

    for(auto it: intersecarr)
    {
        cout<<it<<"  ";
    }
    return 0;
}