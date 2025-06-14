#include<bits/stdc++.h>
using namespace std;
int slargest(int arr[], int n)
{
    int largest=arr[0];
    int second=INT_MIN;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            second=largest;
            largest=arr[i];
        }
        if(arr[i]<largest && arr[i]>second)
        {
            second=largest;
        }
    }
    if(second==INT_MIN)
    {
        return -1;
    }
    return second;
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
    int secondlargest=slargest(arr, n);
    cout<<secondlargest<<" ";
    return 0;
}