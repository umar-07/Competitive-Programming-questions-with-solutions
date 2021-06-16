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
        if(n==1 || m==1)
            cout << "YES" << endl;
        else if(n==2 && m==2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
	return 0;
}
