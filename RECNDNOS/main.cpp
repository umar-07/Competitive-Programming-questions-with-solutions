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
        ll arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        vector <ll> h[1001];
        for(int i=0; i<n; i++)
        {
            if(h[arr[i]].size()==0)
            {
                h[arr[i]].push_back(i);
                continue;
            }
            else
            {
                ll s = h[arr[i]].size();
                ll k = h[arr[i]][s-1];
                if(k+1==i)
                    continue;
                h[arr[i]].push_back(i);
            }
            //cout << arr[i] << "-> " ;
            //for(int j=0; j<h[arr[i]].size(); j++)
            //    cout << h[arr[i]][j] << " ";
            //cout << endl;
        }
        ll maxi=0;
        ll idx=-1;
        for(int i=1; i<1001; i++)
        {
            if(h[i].size()>maxi)
            {
                maxi= h[i].size();
                idx=i;
            }
        }
        cout << idx << endl;
    }
	return 0;
}
