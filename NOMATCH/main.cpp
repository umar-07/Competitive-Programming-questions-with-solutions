#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        for(long long int i=0; i<n; i++)
            cin >> arr[i];
        long long int s=0, d=0;
        sort(arr, arr+n);
        for(long long int i=0; i<n/2; i++)
            d+=arr[i];
        for(long long int i=n/2; i<n; i++)
            s+=arr[i];
        //cout << d << " " << s << endl;
        cout << abs(s-d) << endl;
    }
    return 0;

}
