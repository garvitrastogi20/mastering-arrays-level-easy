#include<bits/stdc++.h>
using namespace std;

int missingnumber(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        int flag=0;
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]==i)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            return i;
        }
    }
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
    cout<<"Missing number: "<<missingnumber(arr,n);
    return 0;
        
}