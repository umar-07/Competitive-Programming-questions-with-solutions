#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;
    ll border=0;
    if(n%2==0)
        border=n/2;
    else
        border=(n/2)+1;
    ll res=0;
    if(k<=border)
        res= (2*k)-1;
    else
    {
        k=k-border;
        res=2*k;
    }
    cout << res << endl;
	return 0;
}
