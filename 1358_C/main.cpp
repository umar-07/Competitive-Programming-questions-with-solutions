#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

//GeeksForGeeks

ll printNcR(ll n, ll r)
{

    // p holds the value of n*(n-1)*(n-2)...,
    // k holds the value of r*(r-1)...
    long long int p = 1, k = 1;

    // C(n, r) == C(n, n-r),
    // choosing the smaller value
    if (n - r < r)
        r = n - r;

    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;

            // gcd of p, k
            long long int m = __gcd(p, k);

            // dividing by gcd, to simplify product
            // division by their gcd saves from the overflow
            p /= m;
            k /= m;

            n--;
            r--;
        }

        // k should be simplified to 1
        // as C(n, r) is a natural number
        // (denominator should be 1 ) .
    }

    else
        p = 1;

    // if our approach is correct p = ans and k =1
    return p;
}

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if(x1==x2 || y1==y2)
        {
            cout << "1" << endl;
            continue;
        }
        else
        {
            ll d = y2-y1;
            ll r = x2-x1;
            ll s = d+r;
            ll mini = min(r,d);
            ll maxi = max(r,d);
            ll res = printNcR(s,mini);
            ll ans=2;
            res-=2;
            ll op = res/4;
            res=res-op;
            ans+=res;
            cout << ans << endl;
        }
    }
	return 0;
}
