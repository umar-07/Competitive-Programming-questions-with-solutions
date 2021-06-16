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
        ll x=n;
        ll two=0;
        if(n==1)
        {
            cout << "0" << endl;
            continue;
        }
        if(n%2!=0)
        {
            ll res=n/2;
            cout << res << endl;
            continue;
        }
        while(n%2==0 && n>1)
        {
            n=n/2;
            two++;
        }
        two++;
        ll num = pow(2,two);
        ll res = x/num;
        cout << res << endl;
    }
	return 0;
}
