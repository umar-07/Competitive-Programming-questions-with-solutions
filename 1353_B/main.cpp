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
        ll n, k;
        cin >> n >> k;
        ll a[n], b[n];
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<n; i++)
            cin >> b[i];
        sort(a, a+n);
        sort(b, b+n);
        reverse(b, b+n);
        ll sum=0;
        int i=0;
        while(i<k && b[i]>a[i])
        {
            sum+=b[i];
            i++;
        }
        for(; i<n; i++)
            sum+=a[i];
        cout << sum << endl;
    }
    return 0;
}
