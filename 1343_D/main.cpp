#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        ll sum[n/2];
        for(int i=0; i<n/2; i++)
            sum[i] = arr[i]+arr[n-1-i];
        unordered_map <ll, ll> m;
        ll maxi=-1;
        for(int i=0; i<n/2; i++)
        {
            if(m.find(sum[i])==m.end())
                m.insert(make_pair(sum[i], 1));
            else
            {
                m[sum[i]]=m[sum[i]]+1;
            }
        }
        ll above=-1;
        ll below=-1;
        ll maxi_above=-1;
        ll maxi_below=-1;
        for(auto itr=m.begin(); itr!=m.end(); itr++)
        {
            if(itr->first>k+1 && itr->second>maxi_above)
            {
                above=itr->first;
                maxi_above=itr->second;
            }
            else if(itr->first>k+1 && itr->second==maxi_above && abs(k+1-above)>abs(k+1-itr->first))
            {
                above=itr->first;
                maxi_above=itr->second;
            }
            if(itr->first<=k && itr->second>maxi_below)
            {
                below=itr->first;
                maxi_below=itr->second;
            }
            else if(itr->first<=k && itr->second==maxi_below && abs(k-below)>abs(k-itr->first))
            {
                below=itr->first;
                maxi_below=itr->second;
            }
        }
        ll avg=k+1;
        ll a=0, b=0, v=0;
        for(int i=0; i<n/2; i++)
        {
            if(sum[i]==avg)
                continue;
            else
                v+=1;
        }
        if(above!=-1)
        {
            for(int i=0; i<n/2; i++)
            {
                if(sum[i]==above)
                    continue;
                else
                {
                    ll hell = above/2;
                    ll co=0;
                    if(arr[i]>=hell)
                        co++;
                    if(arr[n-1-i]>=hell)
                        co++;
                    if(co>=1)
                        a+=1;
                    else
                        a+=2;
                }
            }
        }
        if(below!=-1)
        {
            for(int i=0; i<n/2; i++)
            {
                if(sum[i]==below)
                    continue;
                else
                {
                    ll co=0;
                    if(arr[i]>=below && arr[n-1-i]>=below)
                        b+=2;
                    else
                        b+=1;
                }
            }
        }
        //cout << "a b v: " << a << " " << b << " " << v << endl;
       // cout << "above below avg: " << above << " " << below  << endl;
        if(above==-1)
            cout << min(b,v) << endl;
        else if(below==-1)
            cout << min(a,v) << endl;
        else
        {

        ll final_res = min(a, (min(b,v)));
        cout << final_res << endl;
        }
    }
    return 0;
}
