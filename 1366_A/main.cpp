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
        ll a, b;
        cin >> a >> b;
        ll ans = (a+b)/3;
        ll res = min(a, min(b, ans));
        cout << res << endl;
    }
	return 0;
}
