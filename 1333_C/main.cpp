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
    map <ll, vector <ll> > m;
    for(int i=0; i<n; i++)
    {
        if(m.find(pre[i])==m.end())
        {
            auto pr = m.insert(make_pair(pre[i], vector <ll> ()));
            pr.first->second.push_back(i);
            cout << pre[i] << " NOT FOUND at i: " << i << endl;
        }
        else
        {
            auto pr = m.find(pre[i]);
            cout << pre[i] << " FOUND and i inserted is: " << i << endl;
            vector <ll> &v = pr->second;
            v.push_back(i);
        }
    }
    ll c=0;
    for(int i=0; i<n; i++)
    {
        if(pre[i]==0)
            c++;
    }
    map <ll, vector<ll> > :: iterator itr;
    for(itr=m.begin(); itr!=m.end(); itr++)
    {
        vector <ll> &v = itr->second;
        for(int i=0; i<n; i++)
            cout << v[i] << " ";
        cout << endl;
    }

    for(itr=m.begin(); itr!=m.end(); itr++)
    {
        vector <ll> &v = itr->second;
        if(v.size()>1)
        {
            ll counti = v.size();
            counti = (counti)*(counti-1);
            counti = counti/2;
            c+=counti;
        }
    }
    cout << c << endl;
    return 0;
}
