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
        map <ll, ll> a;
        map <ll, ll> b;
        map <ll, ll> fin;
        for(int i=0; i<n; i++)
        {
            ll k;
            cin >> k;
            a[k]++;
            fin[k]++;
        }
        for(int i=0; i<n; i++)
        {
            ll k;
            cin >> k;
            b[k]++;
            fin[k]++;
        }
        map <ll, ll> res1;
        map <ll, ll> res2;
        int flag=0;
        for(auto itr=fin.begin(); itr!=fin.end(); itr++)
        {
            if(itr->second%2!=0)
            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            cout << -1 << endl;
            continue;
        }
        for(auto itr=a.begin(); itr!=a.end(); itr++)
        {
            ll num = itr->first;
            ll c1 = itr->second;
            auto it = b.find(num);
            ll c2=0;
            if(it!=b.end())
                c2=it->second;
            if(c2==c1)
                continue;
            if(c2>c1)
                continue;
            else
            {
                ll k = c1-c2;
                if(k%2!=0)
                    flag=1;
                res1[num]=k/2;
            }
        }
        if(flag)
        {
            cout << -1 << endl;
            continue;
        }
        for(auto itr=b.begin(); itr!=b.end(); itr++)
        {
            ll num = itr->first;
            ll c1 = itr->second;
            auto it = a.find(num);
            ll c2=0;
            if(it!=a.end())
                c2=it->second;
            if(c2==c1)
                continue;
            if(c2>c1)
                continue;
            else
            {
                ll k = c1-c2;
                if(k%2!=0)
                    flag=1;
                res2[num]=k/2;
            }
        }
        /*for(auto itr=res.begin(); itr!=res.end(); itr++)
            cout << itr->first << "," << itr->second << " ";
        cout << endl;*/
        if(flag)
        {
            cout << -1 << endl;
            continue;
        }
        else if(res1.size()!=res2.size())
        {
            cout << -1 << endl;
            continue;
        }
        else if(res1.empty() && res2.empty())
        {
            cout << 0 << endl;
            continue;
        }
        else
        {

        }
    }
	return 0;
}
