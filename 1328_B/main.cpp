#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll root(ll a, ll b, ll c)
{
    ll discriminant = b*b - 4*a*c;

}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        string s(n, 'a');
        //cout << s << endl;
        //cin.sync();
        double d = 1 + 8*k;
        double p =(1.0+(float)sqrt(d))/2.0;
        ll f = ceil(p);
        ll res = f-1;
        res = res*(res-1);
        res = res/2;
        res=res+1;
        ll pr = k-res;
        s[n-f]='b';
        s[n-1-pr]='b';
        cout << s << endl;
    }
    return 0;
}
