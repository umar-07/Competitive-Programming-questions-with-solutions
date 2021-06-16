#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    ll n, m;
    cin >> n >> m;
    ll f=1, l=n;
    ll sum = (n*(n+1))/2;
    sum-=f;
    sum-=l;
    for(int i=0; i<m; i++)
    {
        ll k;
        cin >> k;
        if(k==f || k==l || (k>1 && k<n))
        {
            ll temp = f;
            f=l;
            l=temp;
        }
        else
            l=k;
        cout << sum+f+l << endl;
    }
	return 0;
}
