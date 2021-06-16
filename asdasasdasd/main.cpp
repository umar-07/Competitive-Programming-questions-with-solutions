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
        ll n, k, f;
        cin >> n >> k >> f;
        vector <pair <ll, ll> > v;
        for(int i=0; i<n; i++)
        {
            ll a, b;
            cin >> a >> b;
            v.push_back(make_pair(a,b));
        }
        sort(v.begin(), v.end());
        ll c=0;
        if(v[0].first!=0)
            c+=(v[0].first);
        ll maxi = v[0].second;
        //debug(maxi)
        //cout << endl;
        for(int i=1; i<v.size(); i++)
        {
            if(maxi<(v[i].first))
            {
                c+=(v[i].first - maxi);
          //      cout << "inc c at " << i << endl;
                maxi= max(maxi,v[i].second);
            }
            maxi = max(maxi, v[i].second);
            //debug(maxi);
            //cout << endl;
        }
        if(maxi<f)
        {
            c+=(f - maxi);
        }
        //debug(c);
        //cout << endl;
        if(c>=k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
	return 0;
}
