#include<bits/stdc++.h>
using namespace std;
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
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            cnt++;
        }
    }
    int temp[n-cnt];
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            temp[i]=arr[i];
        }
    }
    for(int i=0;i<n-cnt;i++)
    {
        arr[i]=temp[i];
    }
    for(int i=n-cnt;i<n;i++)
    {
        arr[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}