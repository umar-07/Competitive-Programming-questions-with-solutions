#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector <ll> v;
        for(int i=0; i<n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            ll p = v[i]-i;
            if(p<0)
                continue;
            sum+=p;
        }
        ll m = 1000000007;
        cout << sum%m << endl;
    }
    return 0;
}
