#include<bits/stdc++.h>
using namespace std;


vector<int> unionofarray(vector<int> a, vector<int> b)
{
    int i=0;
    int j=0;
    
    int n1= a.size();
    int n2= b.size();

    vector<int> unionarr;

    while(i<n1 && j<n2)
    {
        if(a[i]<=b[j])
        {
            if(unionarr.size()== 0 ||unionarr.back()!=a[i])
            {
                unionarr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionarr.size()==0 ||unionarr.back()!=b[j] )
            {
                unionarr.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<n1)
    {
        if(a[i]<=b[j])
        {
            if(unionarr.back()!=a[i] || unionarr.size()==0)
            {
                unionarr.push_back(a[i]);
            }
            i++;
        }
    }
    while(j<n2)
    {
        if(a[i]<=b[j])
        {
            {
            if(unionarr.back()!=b[j] || unionarr.size()==0)
            {
                unionarr.push_back(b[j]);
            }
            j++;
        }
        }
    }

    return unionarr;
}

int main()
{
    vector<int> a={1,2,3,8,9,10,11};
    vector<int> b={1,2,4,5,6,7,8};
    vector<int> unionarr= unionofarray(a,b);
    for(auto it: unionarr)
    {
        cout<<it<<"  ";
    }
    return 0;

}