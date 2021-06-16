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
        ll n, m, k;
        cin >> n >> m >> k;
        ll z = n/k;
        if(m==0)
        {
            cout << 0 << endl;
            continue;
        }
        if(z>=m)
        {
            cout << m << endl;
            continue;
        }
        else
        {
            ll rem_person = k-1;
            ll rem_card = m-z;
            if(rem_card<=rem_person)
            {
                cout << z-1 << endl;
            }
            else if(rem_card%rem_person==0)
            {
                ll p = rem_card/rem_person;
                cout << z-p << endl;
                continue;
            }
            else
            {
                ll p = ceil((rem_card*1.0)/(rem_person*1.0));
                cout << z-p << endl;
            }
        }
    }
	return 0;
}
