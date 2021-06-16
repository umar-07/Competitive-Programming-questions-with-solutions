#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

ll power(ll x, ll y, ll p)
{
    ll res = 1;     // Initialize result

    x = x % p; // Update x if it is more than or
                // equal to p

    if (x == 0) return 0; // In case x is divisible by p;

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}


int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n], b[n];
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<n; i++)
            cin >> b[i];
        ll h[n+1]={0};
        ll a_inv[n+1], b_inv[n+1];
        a_inv[0]=-1;
        b_inv[0]=-1;
        for(int i=0; i<n; i++)
        {
            a_inv[a[i]]=i;
        }
        for(int i=0; i<n; i++)
        {
            b_inv[b[i]]=i;
        }
        /*cout << "a_inv" << endl;
        for(int i=0; i<n+1; i++)
        {
            cout << a_inv[i] << " ";
        }
        cout << endl;
        cout << "b_inv" << endl;
        for(int i=0; i<n+1; i++)
        {
            cout << b_inv[i] << " ";
        }
        cout << endl;*/
        ll sum[n+1]={0};
        ll c=0;
        for(int i=0; i<n; i++)
        {
            if(h[a[i]]==1)
                continue;
            vector <ll> v;
            ll start=a[i];
            v.push_back(a[i]);
            v.push_back(b[i]);
            h[a[i]]=1;
            h[b[i]]=1;
            int j;
            j=a_inv[b[i]];
            while(1)
            {
                v.push_back(a[j]);
                v.push_back(b[j]);
                h[a[j]]=1;
                h[b[j]]=1;
                if(b[j]==start)
                    break;
                j=a_inv[b[j]];
                //debug(j) debug(start)
                //cout << endl;
            }
            ll idx = v.size()/2;
            sum[idx]++;
            c++;
        }
        ll ans = power(2, c, mod);
        cout << ans << endl;
    }
	return 0;
}
