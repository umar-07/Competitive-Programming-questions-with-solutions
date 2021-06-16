#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    ll n, m;
    cin >> n >> m;
    int h[m]={0};
    set <char> s[m];
    for(int i=0; i<n; i++)
    {
        string str;
        cin >> str;
        for(int j=0; j<m; j++)
        {
            if(s[j].find(str[j])==s[j].end())
                h[j]++;
            s[j].insert(str[j]);
        }
    }

        ll res=1;
        for(int i=0; i<m; i++)
            res = ((res%mod)*(h[i]%mod))%mod;
        cout << res << endl;
    return 0;
}
