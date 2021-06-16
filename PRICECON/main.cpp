#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        ll sum=0;
        for(int i=0; i<n; i++)
            cin >> arr[i];
        for(int i=0; i<n; i++)
        {
            sum+=arr[i];
            if(arr[i]>k)
                arr[i]=k;
        }
        ll ans=0;
        for(int i=0; i<n; i++)
            ans+=arr[i];
        ll res = sum-ans;
        cout << res << endl;
    }
	return 0;
}
