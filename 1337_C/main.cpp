#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void dfs(vector <ll> g[], vector <int> &s, vector <int> &d, ll c, ll p)
{
    s[c]=1;
    d[c]=d[p]+1;
    for(auto v=g[c].begin(); v!=g[c].end(); v++)
    {
        if(*v == p)
            continue;
        dfs(g, s, d, *v, c);
        s[c]+=s[*v];
    }
}

int main()
{
    ll n, k;
    cin >> n >> k;
    vector <ll> g[n+1];
    for(int i=0; i<n-1; i++)
    {
        ll x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    vector <int> s (n+1, 0);
    vector <int> d (n+1,0);
    dfs(g, s, d, 1, 0);
    /*for(int i=0; i<s.size(); i++)
        cout << s[i] << " ";
    cout << endl;
    for(int i=0; i<d.size(); i++)
        cout << d[i] << " ";
    cout << endl;*/
    ll a[n+1];
    for(int i=0; i<n+1; i++)
    {
        a[i]=s[i]-d[i];
    }
    ll a_new[n];
    for(int i=0; i<n; i++)
        a_new[i]=a[i+1];
    sort(a_new, a_new+n, greater<ll>());
    ll sum=0;
    for(int i=0; i<n-k; i++)
        sum+=a_new[i];
    cout << sum << endl;
    return 0;
}
