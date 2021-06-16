#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    ll h[100001]={0};
    for(int i=0; i<n; i++)
    {
        h[arr[i]]+=arr[i];
    }
    ll inc = h[1];
    ll exc = 0;
    ll exc_new;
    for(int i=2; i<100001; i++)
    {
        if(inc>exc)
            exc_new=inc;
        else
            exc_new=exc;
        inc = exc+h[i];
        exc = exc_new;
    }
    ll res = max(inc, exc);
    cout << res << endl;
    return 0;
}
