#include <bits/stdc++.h>

using namespace std;
int gcd(long long int a, long long int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        sort(arr,arr+n);
        long long int maxi=arr[n-1];
        long long int g=gcd(arr[0],arr[1]);
        for(int i=2; i<n-1; i++)
        {
            g=gcd(g,arr[i]);
        }
        long long int ans=g+maxi;
        cout << ans << endl;
    }
    return 0;
}
