#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define m 1000000007
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        if(k==1)
            cout << n << endl;
        else if(n==0)
        {
            ll res=0;
            res = ((k%m)*((k-1)%m))%m;
            cout << res << endl;
        }
        else
        {
            ll l=k-1;
            ll s=0;
            ll step=0;
            step+= (l/2);
            ll e = n+step;
            s = ((e%m)*((e+1)%m))%m;
            if(l%2!=0)
            {
                s= (s+n)%m;
            }
            else
            {
                s= (s-n)%m;
            }
            cout << s << endl;
        }
    }
	return 0;
}
