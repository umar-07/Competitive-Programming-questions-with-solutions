#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll c=0;
        while(n!=0)
        {
            if(n<=3)
                break;
            ll m = sqrt(n);
            ll k = m*m;
            ll rem = n-k;
            //cout << "this step : n, m, rem " << n << " " << m << " " << rem <<  endl;
            c++;
            n=rem;
        }
        if(n>0)
            c+=n;
        cout << c << endl;
    }
	return 0;
}
