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
        ll arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        ll ans=0;
        for(int i=0; i<n-1; i++)
        {
            ll maxi = max(arr[i], arr[i+1]);
            ll mini = min(arr[i], arr[i+1]);
            ll c=0;
            if(maxi<=2*mini)
                continue;
            else
            {
                c++;
                ll num=mini;
                while(1)
                {
                    num=mini*(pow(2,c));
                    if(maxi<=2*num)
                        break;
                    c++;
                }
            }
            ans+=c;
        }
        cout << ans << endl;
    }
	return 0;
}
