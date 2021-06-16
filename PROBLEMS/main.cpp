#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    ll p, s;
    cin >> p >> s;
    set <pair <ll, ll> > v;
    for(int i=0; i<p; i++)
    {
        int a[s], b[s];
        for(int j=0; j<s; j++)
            cin >> a[j];
        for(int j=0; j<s; j++)
            cin >> b[j];
        set <pair <ll, ll>> prob;
        for(int j=0; j<s; j++)
        {
            prob.insert({a[j],b[j]});
        }
        int c=0;
        for(auto itr=prob.begin(); itr!=prob.end(); itr++)
        {
            auto it=++itr;
            itr--;
            if(it==prob.end())
                break;
            if((*itr).second > (*it).second)
                c++;
        }
        v.insert({c, i+1});
    }
    for(auto itr=v.begin(); itr!=v.end(); itr++)
        cout << (*itr).second << endl;
	return 0;
}
