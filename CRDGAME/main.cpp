#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

ll sumofdigit(ll n)
{
    ll x=n;
    ll c=0;
    while(x>0)
    {
        ll rem = x%10;
        c+=rem;
        x=x/10;
    }
    return c;
}



int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n], b[n];
        ll c=0, m=0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i] >> b[i];
            ll x = sumofdigit(a[i]);
            ll y = sumofdigit(b[i]);
            if(x>y)
                c++;
            else if(y>x)
                m++;
            else
            {
                m++;
                c++;
            }
        }
        if(c>m)
        {
            cout << 0 << " " << c << endl;
        }
        else if(m>c)
        {
            cout << 1 << " " << m << endl;
        }
        else
            cout << 2 << " " << m << endl;
    }
	return 0;
}
