#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        ll maxi = n*(a+b);
        ll mini = n*(a-b);
        ll p_maxi = c+d;
        ll p_mini = c-d;
        if(maxi<p_mini || mini>p_maxi)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
	return 0;
}
