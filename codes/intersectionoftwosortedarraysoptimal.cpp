#include<bits/stdc++.h>
using namespace std;

vector<int> intersectionofarr(vector<int> a, vector<int> b)
{
    int n1= a.size();
    int n2= b.size();
    int i=0;
    int j=0;

    vector<int> intersecarr;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            i++;
        }
        else if(b[j]<a[i])
        {
            j++;
        }
        else{
            intersecarr.push_back(a[i]);
            i++;
            j++;
        }
    }
    return intersecarr;
}

int main()
{
    vector<int> a={1,2,3,4,5,6};
    vector<int> b={1,4,5,6,7,8};

    vector<int> intersecarr= intersectionofarr(a,b);
    for(auto it: intersecarr)
    {
        cout<<it<<" ";
    }
    return 0;
}