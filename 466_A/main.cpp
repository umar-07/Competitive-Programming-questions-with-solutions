#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    ll n, m, a, b;
    cin >> n >> m >> a >> b;
    ll res1 = n*a;
    ll res2 = ((n/m)*b) + ((n%m)*a);
    ll res3 = ((n/m)+1)*b;
    ll res = min(res1, min(res2, res3));
    cout << res << endl;
	return 0;
}
