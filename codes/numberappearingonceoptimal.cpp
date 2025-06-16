#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 1, 2, 3, 3, 4, 4}; // Only 2 appears once
    int N = sizeof(arr) / sizeof(arr[0]);

    int result = 0;
    for (int i = 0; i < N; i++)
    {
        result ^= arr[i];
    }

    cout << "The unique element is: " << result << endl;
    return 0;
}
