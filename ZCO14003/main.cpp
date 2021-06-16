#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    sort(arr, arr+n);
    long long int max=0;
    for(int i=0; i<n; i++)
    {
        long long int sum= arr[i]*(n-i);
        if(sum>max)
            max=sum;
    }
    cout << max << endl;
    return 0;
}
