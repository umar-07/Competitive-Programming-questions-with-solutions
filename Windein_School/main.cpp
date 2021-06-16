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
        // INPUT

        ll a, b;
        cin >> a >> b;
        ll x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        ll n, m;
        cin >> n >> m;

        //Making them Sit together

        ll boys_can_sit = a-n;
        ll girls_can_sit = b-m;
        ll mini = min(boys_can_sit, girls_can_sit);

        ll placed = min(mini, x3);

        //Making them sit in x1 and x2

        a=a-placed;
        b=b-placed;

        if(a<=x1 && b<=x2)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
	return 0;
}
