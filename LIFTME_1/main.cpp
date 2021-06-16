#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, q;
        cin >> n >> q;
        ll a[q+1], b[q+1];
        for(int i=1; i<=q; i++)
            cin >> a[i] >> b[i];
        a[0]=0, b[0]=0;
        ll sum = 0;
        ll i=1;
        while(q--)
        {
            sum+= (abs(a[i]-b[i-1]) + abs(a[i]-b[i]));
            i++;
        }
        cout << sum << endl;
    }
    return 0;
}
