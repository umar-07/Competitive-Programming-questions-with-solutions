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
        ll a[n];
        ll b[n];
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<n; i++)
            cin >> b[i];
        ll c=0, d=0;
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            if(c==d && a[i]==b[i])
            {
                sum+=a[i];
                c+=a[i];
                d+=b[i];
                continue;
            }
            c+=a[i];
            d+=b[i];
        }
        cout << sum << endl;
    }
	return 0;
}
