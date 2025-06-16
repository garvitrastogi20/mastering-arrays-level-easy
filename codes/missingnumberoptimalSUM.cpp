#include<bits/stdc++.h>
using namespace std;

int missingnumber(int arr[], int n)
{
    int sum= n*(n+1)/2;
    int s2=0;
    for(int i=0;i<n-1;i++)
    {
        s2+=arr[i];
    }
    return (sum-s2);
}

int main()
{
    int arr[]={1,2,3,5,6};
    int n= sizeof(arr)/sizeof(arr[0]);

    int missnum= missingnumber(arr,n);
    cout<<missnum<<endl;
    return 0;

}