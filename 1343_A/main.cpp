#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll m = 4;
        ll res=1;
        while(1)
        {
            ll div=m-1;
            if(n%div==0)
            {
                res=div;
                //cout << div << " " << x << " " << y << endl;
                break;
            }
            m=m*2;
        }
        ll ans = n/res;
        cout << ans << endl;
    }
	return 0;
}
