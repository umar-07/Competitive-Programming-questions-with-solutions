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
    ll a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    ll b[n];
    for(int i=0; i<n; i++)
        cin >> b[i];
    map <ll, ll> s;
    for(int i=0; i<n; i++)
    {
        s[a[i]]=i+1;
    }
    map <ll, ll> ma;
    for(int i=0; i<n; i++)
    {
        auto itr = s.find(b[i]);
        int j=i+1;
        int m=itr->second;
        int k;
        if(m>=j)
            k=m-j;
        else
        {
            k= abs(n-(abs(m-j)));
        }
        ma[k]++;
    }
    int maxi=0;
    for(auto itr=ma.begin(); itr!=ma.end(); itr++)
    {
        if(itr->second>maxi)
            maxi=itr->second;
    }
    cout << maxi << endl;
	return 0;
}
