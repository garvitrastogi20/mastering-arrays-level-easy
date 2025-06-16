#include<bits/stdc++.h>
using namespace std;

int missingnumber(int arr[], int N)
{
    int xor1=0;
    int xor2=0;
    int n=N-1;
    for(int i=0;i<n;i++)
    {
        xor2=xor2^arr[i];
        xor1=xor1^(i+1);
    }

    xor1=xor1^N;
    return xor1^xor2;
}

int main()
{
    int arr[]={1,2,3,5,6};
    int N=sizeof(arr)/sizeof(arr[0]);

    int missnum=missingnumber(arr,N);
    cout<<missnum;
    return 0;
}