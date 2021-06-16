#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    sort(arr, arr+n);
    reverse(arr, arr+n);
    ll a, b, c;
    ll flag=1;
    vector <ll> res;
    for(int i=0; i<n-2; i++)
    {
        ll p=arr[i];
        ll q=arr[i+1];
        ll r=arr[i+2];
        if(p+q<=r)
            continue;
        if(p+r<=q)
            continue;
        if(q+r<=p)
            continue;
        flag=0;
        res.push_back(p);
        res.push_back(q);
        res.push_back(r);
        break;
    }
    if(flag)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        sort(res.begin(), res.end());
        for(int i=res.size()-1; i>=0; i--)
            cout << res[i] << " ";
        cout << endl;
    }
	return 0;
}
