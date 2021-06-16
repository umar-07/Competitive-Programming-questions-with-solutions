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
        string str;
        cin >> str;
        ll c[n]={0};
        map <pair<ll, ll>, ll > s;
        ll d=0, k=0;
        for(int i=0; i<n; i++)
        {
            if(str[i]=='D')
                d++;
            else
                k++;
            if(d==0 || k==0)
            {
                //pair <ll, ll> pp =
                s[make_pair(d,k)]+=1;
                if(d==0)
                    c[i]=k;
                else
                    c[i]=d;
                continue;
            }
            ll g = __gcd(d,k);
            d=d/g;
            k=k/g;
            pair <ll, ll> p = make_pair(d,k);
            s[p]+=1;
            c[i]=s[p];
        }
        for(int i=0; i<n; i++)
            cout << c[i] << " " ;
        cout << endl;
    }
	return 0;
}
