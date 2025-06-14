#include<bits/stdc++.h>
using namespace std;
int ssmall(int arr[], int n)
{
    int smallest= arr[0];
    int ssmallest= INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            ssmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]!=smallest && arr[i]<ssmallest)
        {
            ssmallest=arr[i];
        }
    }
    if(ssmallest==INT_MAX)
    {
        return -1;
    }
    return ssmallest;
}
int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int secondsmallest= ssmall(arr, n);
    cout<<secondsmallest<<" ";
    return 0;
}