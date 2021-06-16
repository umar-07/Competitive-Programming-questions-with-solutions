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
        map <ll, ll> m;
        int n;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            ll k;
            cin >> k;
            m[k]++;
        }
        map <ll, ll> res;
        for(auto it=m.begin(); it!=m.end(); it++)
        {
            res[it->second]++;
        }
        ll maxi=0;
        ll elem=0;
        for(auto it=res.begin(); it!=res.end(); it++)
        {
            if(it->second > maxi)
            {
                maxi=it->second;
                elem=it->first;
            }
        }
        cout << elem << endl;
    }
	return 0;
}
