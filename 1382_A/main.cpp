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
        ll a[n];
        ll b[m];
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<m; i++)
            cin >> b[i];
        sort(a, a+n);
        sort(b, b+m);
        int flag=0;
        ll idx=-1;
        for(int i=0; i<n; i++)
        {
            if(binary_search(b, b+m, a[i]))
            {
                idx=a[i];
                flag=1;
                break;
            }
            continue;
        }
        if(flag)
        {
            cout << "YES" << endl;
            cout << 1 << " " << idx << endl;
        }
        else
            cout << "NO" << endl;
    }
	return 0;
}
