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
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        set <ll> s;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            s.insert(arr[i]);
        }
        if(s.size()>k)
            cout << "-1" << endl;
        else
        {
            int p=1;
            while(s.size()!=k)
            {
                if(s.find(p)==s.end())
                    s.insert(p);
                p++;
            }
            ll x= s.size()*n;
            cout << x << endl;
            for(int i=0; i<n; i++)
            {
                for(auto itr=s.begin(); itr!=s.end(); itr++)
                    cout << *itr << " ";
            }
            cout << endl;
        }
    }
	return 0;
}
