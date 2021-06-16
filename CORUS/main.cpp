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
    cin>>t;
    while(t--)
    {
        ll n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        ll h[26]={0};
        for(int i=0; i<n; i++)
        {
            ll k = s[i]-'a';
            h[k]++;
        }
        while(q--)
        {
            ll s=0;
            ll c;
            cin >> c;
            for(int i=0; i<26; i++)
                if(h[i] > c)
                    s+=(h[i]-c);
            cout<< s << endl;
        }
        //debug(q)
    }
	return 0;
}
