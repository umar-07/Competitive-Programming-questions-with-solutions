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
        ll n;
        cin >> n;
        if(n==1)
        {
            cout << 0 << endl;
            continue;
        }
        ll k=n;
        ll i=0;
        while(k>1)
        {
            k=k/2;
            i++;
        }
        ll ans = pow(2,i);
        ans--;
        cout << ans << endl;
    }
	return 0;
}
