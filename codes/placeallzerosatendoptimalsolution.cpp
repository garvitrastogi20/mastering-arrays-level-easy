#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    // finding first zero index in the array
    int j=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
    }


    //swapping zero elements from non zero elements
    for(int i=j+1;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    //print tha array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}