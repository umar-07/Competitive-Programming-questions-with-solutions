#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll findlcm(long long int arr[], long long int n)
{
    // Initialize result
    ll ans = arr[0];

    // ans contains LCM of arr[0], ..arr[i]
    // after i'th iteration,
    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));

    return ans;
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
        long long int lcm=findlcm(arr, n);
        //cout << lcm;
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            sum=sum+(arr[i]-1);
        }
       // if(sum+1>=lcm)
            //cout << lcm << endl;
        //else
            cout << sum+1 << endl;
    }
    return 0;
}
