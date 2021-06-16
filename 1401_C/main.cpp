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
        ll b[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            b[i]=arr[i];
        }
        vector <ll> v;
        sort(b, b+n);
        for(int i=0; i<n; i++)
        {
            if(b[i]!=arr[i])
            {
                v.push_back(arr[i]);
            }
        }
        ll m = *min_element(arr, arr+n);
        int flag=0;
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]%m!=0)
            {
                flag=1;
                break;
            }
        }
        if(flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
	return 0;
}
