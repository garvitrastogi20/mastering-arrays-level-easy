#include<bits/stdc++.h>
using namespace std;

int missingnumber(int arr[], int n)
{
    int hash[n+1]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]=1;
    }
    for(int i=1;i<=n;i++)
    {
        if(hash[i]==0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int misnum= missingnumber(arr,n);
    cout<<misnum;
    return 0;
}