#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    for(int i=0; i<n; i++)
        sum+=arr[i];
    sort(arr, arr+n);
    int a = sum/n;
    int c=0, b;
    if(sum>=0)
        b = ceil((1.0*sum)/(n*1.0));
    else
        b = floor((1.0*sum)/(n*1.0));
    if(a==b)
        cout << n << endl;
    else
        cout << n-1 << endl;
    return 0;
}
