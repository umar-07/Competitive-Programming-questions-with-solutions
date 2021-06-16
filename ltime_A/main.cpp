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
        ll n, s;
        cin >> n >> s;
        ll rem = 100-s;
        ll arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        ll h[n];
        for(int i=0; i<n; i++)
            cin >> h[i];
        vector <ll> def;
        vector <ll> forw;
        for(int i=0; i<n; i++)
        {
            if(h[i]==0)
                def.push_back(arr[i]);
            else
                forw.push_back(arr[i]);
        }
        sort(def.begin(), def.end());
        sort(forw.begin(), forw.end());
        if(def.size()==0 || forw.size()==0)
            cout << "no" << endl;
        else
        {
            ll bud = def[0]+forw[0];
            if(bud>rem)
                cout << "no" << endl;
            else
                cout << "yes" << endl;
        }
    }
	return 0;
}
