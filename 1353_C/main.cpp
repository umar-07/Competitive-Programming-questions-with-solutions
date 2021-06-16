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
        ll sum=0;
        if(n==1)
        {
            cout << sum << endl;
            continue;
        }
        ll total=1;
        ll po=8;
        ll i=1;
        while(total!=n*n)
        {
            sum+= (i*po);
            total+=po;
            i++;
            po+=8;
        }
        cout << sum << endl;
    }
	return 0;
}
