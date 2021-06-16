#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        map <ll, set <ll> > m;
        for(int i=0; i<n; i++)
        {
            ll x;
            cin >> x;
            if(m.find(x)==m.end())
            {
                m[x] = set <ll> ();
                m[x].insert(i);
            }
            else
            {
                m[x].insert(i);
            }
        }
        ll c=1;
        auto itr=m.begin();
        auto it = itr->second.begin();
        ll idx= *it;
        for(auto i=m.begin(); i!=m.end(); i++)
        {
            if(i==m.begin())
                continue;
            auto j = i;
            j--;
            auto k = i->second.upper_bound(idx);
            if(k==i->second.end())
            {
                c++;
                auto op = i->second.begin();
                idx = *op;
                continue;
            }
            else
            {
                idx = *k;
                continue;
            }
        }
        cout << c << endl;
    }
	return 0;
}
