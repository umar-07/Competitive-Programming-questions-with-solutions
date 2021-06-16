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
        ll a, b;
        cin >> a >> b;
        ll res=a*b;
        ll q;
        cin >> q;
        while(q--)
        {
            ll c=0;
            ll l, r;
            cin >> l >> r;
            if(a==b)
            {
                cout << "0" << " ";
                continue;
            }
            ll u_b = r/res;
            ll l_b = l/res;
            vector <ll> lower;
            vector <ll> upper;
            for(ll i = l_b*res; i<(l_b*res + max(a,b)); i++)
                lower.push_back(i);
            for(ll i =u_b*res; i<(u_b*res + max(a,b)); i++ )
                upper.push_back(i);
            for(int i=0; i<lower.size(); i++)
            {
                if(lower[i]>=l && lower[i]<=r)
                    c++;
                if(upper[i]>=l && upper[i]<=r)
                    c++;
            }
            if(u_b*res+max(a,b)-1<=r && l_b*res>=l)
            {
                c+= (u_b-l_b)*(max(a,b));
            }
            else if(u_b*res+max(a,b)-1<=r)
                c+= (u_b-l_b-1)*max(a,b);
            else if(l_b*res>=l)
                c+= (u_b-l_b-1)*max(a,b);
            else
                c+= (u_b-l_b-2)*max(a,b);
            cout << (l-r+1-c) << endl;
        }
        cout << endl;
    }
	return 0;
}
