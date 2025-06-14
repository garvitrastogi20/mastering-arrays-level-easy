#include<bits/stdc++.h>
using namespace std;
int removeduplicate(int arr[], int n)
{
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(arr[j]!=arr[i])
        {
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}
int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the sorted elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int rdindex= removeduplicate(arr,n);
    cout<<"Removed Duplicate Elements: ";
    for(int i=0;i<rdindex;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}