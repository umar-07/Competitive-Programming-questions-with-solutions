#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    ll pre[n];
    pre[0]=arr[0];
    for(int i=1; i<n; i++)
    {
        pre[i]=arr[i]+pre[i-1];
    }
    ll c=0;
    for(int i=0; i<n; i++)
    {
        if(pre[i]==0)
            c++;
    }
    map <ll, ll> m;
    map <ll, ll> :: iterator itr;
    for(int i=0; i<n; i++)
    {
        if(m.find(pre[i])==m.end())
        {
            m.insert(pair <int, int> (pre[i], 1));
        }
        else
        {
            auto pr = m.find(pre[i]);
            pr->second++;
        }
    }
    for(itr=m.begin(); itr!=m.end(); itr++)
    {
        if(itr->second>1)
        {
            ll counti = itr->second;
            counti = (counti)*(counti-1);
            counti = counti/2;
            c+=2;
        }
    }
    cout << c << endl;
    return 0;
}
