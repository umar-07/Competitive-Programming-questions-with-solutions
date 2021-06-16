#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll x, y;
        cin >> x >> y;
        ll a, b;
        cin >> a >> b;
        ll maxi=max(x,y);
        ll mini=min(x,y);
        ll s=0;
        if(maxi==0 && mini==0)
            cout << "0" <<endl;
        else
        {
            if(mini==0)
            {
                ll res=maxi*a;
                cout << res << endl;
            }
            else
            {
                ll res = (mini)*b;
                res = res + (maxi-mini)*a;
                ll ans = a*(maxi+mini);
                ll f = min(res, ans);
                cout <<f << endl;
            }
        }
    }
	return 0;
}
