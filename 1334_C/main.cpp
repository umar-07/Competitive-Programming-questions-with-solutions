#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        pair <ll, ll> arr[n];
        pair <ll, pair <ll, ll> > h[n];
        for(int i=0; i<n; i++)
        {
            ll j, k;
            cin >> j >> k;
            arr[i] = make_pair(j, k);
            h[i] = make_pair(j, make_pair(k,i));
        }
        sort(h, h+n);
        ll c=0;
        ll vis[n]={0};
        for(int i=0; i<n; i++)
        {
            c+=
        }
    }
    return 0;
}
