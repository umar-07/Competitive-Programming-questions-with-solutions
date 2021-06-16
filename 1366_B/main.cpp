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
        ll n, x, m;
        cin >> n >> x >> m;
        pair <ll, ll> p;
        p={x, x};
        for(int i=0; i<m; i++)
        {
            ll a, b;
            cin >> a >> b;
            if(p.first<=a && p.second<=b)
            {
                p.first=min(p.first, a);
                p.second=max(p.second, b);
                continue;
            }
            if(a<=p.first && b<=p.second)
            {
                p.first=min(p.first, a);
                p.second=max(p.second, b);
                continue;
            }
        }
        ll res = (p.second-p.first)+1;
        cout << res << endl;
    }
	return 0;
}
