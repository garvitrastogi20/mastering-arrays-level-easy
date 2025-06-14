#include<bits/stdc++.h>
using namespace std;

int checksorted(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]<=arr[i])
        {

        }
        else return false;
    }
    return true;
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
    cout<<checksorted(arr, n);
    return 0;
}