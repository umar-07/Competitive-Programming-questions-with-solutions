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
        ll a[n];
        for(int i=0; i<n; i++)
            cin >> a[i];
        vector <ll> v;
        ll c=0;
        for(int i=0; i<n-1; i++)
        {
            if(a[i+1]-a[i]<=2)
                c++;
            else
            {
                v.push_back(c+1);
                c=0;
            }
        }
        /*for(int i=0; i<v.size(); i++)
            cout << v[i] << " ";
        cout << endl;*/
        v.push_back(c+1);
        sort(v.begin(),v.end());
        ll k =v.size()-1;
        cout << v[0] << " " << v[k] << endl;
    }
	return 0;
}
