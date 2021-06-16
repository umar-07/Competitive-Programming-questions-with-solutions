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
        ll a, b, c, d, e, p;
        cin >> a >> b >> c >> d >> e >> p;
        ll sum=0;
        sum+= (a*p) + (b*p) + (c*p) + (d*p) + (e*p);
        ll max_work= 24*5;
        if(sum<=max_work)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
	return 0;
}
