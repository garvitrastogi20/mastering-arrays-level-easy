#include<bits/stdc++.h>
using namespace std;
int linearsearch(int arr[], int n, int num)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            return i;
        }   
    }
    return -1;
}
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
    int num;
    cout<<"Enter the number you want to search: ";
    cin>>num;
    cout<<"Index of number you want to find: "<<linearsearch(arr,n,num);
    return 0;
}