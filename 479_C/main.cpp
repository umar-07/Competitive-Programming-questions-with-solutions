#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
        ll n;
        cin >> n;
        vector <pair<ll, ll> > v;
        for(int i=0; i<n; i++)
        {
            ll x, y;
            cin >> x >> y;
            v.push_back(make_pair(x, y));
        }
        sort(v.begin(), v.end());
        ll b= v[0].second;
        for(int i=1; i<v.size(); i++)
        {
            if(b==v[i].second)
                continue;
            else if(b<v[i].second)
            {
                b=v[i].second;
                continue;
            }
            else if(b>v[i].second)
            {
                b=v[i].first;
                continue;
            }
        }
        cout << b << endl;
    return 0;
}
