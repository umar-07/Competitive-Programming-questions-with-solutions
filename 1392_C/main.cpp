#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        ll ans=0;
        reverse(arr, arr+n);
        for(int i=0; i<n-1; i++)
        {
            if(arr[i]<arr[i+1])
            {
                ans+=(arr[i+1]-arr[i]);
            }
        }
        cout << ans << endl;
    }
	return 0;
}

