#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll p;
    cin >> p;
    ll a[p];
    for(int i=0; i<p; i++)
        cin >> a[i];
    ll q;
    cin >> q;
    ll b[q];
    for(int i=0; i<q; i++)
        cin >> b[i];
    set <ll> s;
    for(int i=0; i<p; i++)
        s.insert(a[i]);
    for(int i=0; i<q; i++)
        s.insert(b[i]);
    if(s.size()==n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
	return 0;
}
