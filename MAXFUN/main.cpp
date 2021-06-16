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
        sort(arr, arr+n);
        ll x, y, z, ans=0;
        x=arr[0];
        z=arr[n-1];
        if(n%2!=0)
        {
            y = arr[(n-1)/2];
            ans= abs(x-y) + abs(y-z) + abs(z-x);
        }
        else
        {
            ll y1 = arr[(n/2)-1];
            ll y2 = arr[(n/2)];
            ans = max ( ( abs(x-y1)+ abs(y1-z) + abs(x-z) ), ( abs(x-y2)+ abs(y2-z) + abs(x-z) ) );
        }
        cout << ans << endl;

    }
	return 0;
}
