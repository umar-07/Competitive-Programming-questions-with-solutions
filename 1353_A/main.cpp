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
        ll n, m;
        cin >> n >> m;
        ll s=0;
        if(n==1)
            cout << "0" << endl;
        else if(n==2)
            cout << m << endl;

        else
        {
            s=m*2;
            cout << s << endl;
        }
    }
	return 0;
}
