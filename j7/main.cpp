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
        ll p, s;
        cin >> p >> s;
        ll a = p/12;
        ll b = s/6;
        ll m=min(a,b);
        ll v = m*m*m;
        cout << v << endl;
    }
	return 0;
}
