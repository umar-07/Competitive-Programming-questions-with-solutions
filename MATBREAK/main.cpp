#include <bits/stdc++.h>
#define ll long long int
#define m 1000000007
using namespace std;



/* Iterative Function to calculate (x^y)%p in O(log y) */
ll power(ll x, unsigned int y, ll p)
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
    int t;
    cin >> t;
    while(t--)
    {
        ll n, a;
        ll mod=1000000007;
        cin >> n >> a;
        ll res=1;
        ll sum=0;
        ll next=1;
        ll prev=a;
        for(int i=1; i<=n; i++)
        {
            ll po = (2*i)-1;
            if(i==1)
            {
                ll k = a;
                sum=(sum+a)%mod;
                res=(a%mod *a%mod)%mod;
                continue;
            }
            ll k = power(res, po, mod);
            sum=(sum%mod + k%mod)%mod;
            res=((k%mod)*(res%mod))%mod;
        }
        sum = sum%mod;
        cout << sum << endl;
    }
    return 0;
}
