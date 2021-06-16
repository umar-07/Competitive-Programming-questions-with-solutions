#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        map <ll , vector <ll> > m;
        ll idx=1;
        m[idx]= vector <ll> ();
        m[idx].push_back(arr[0]);
        for(int i=1; i<n; i++)
        {
            if(arr[i]*arr[i-1]>0)
            {
                m[idx].push_back(arr[i]);
                //cout << arr[i] << " inserted in " << idx << endl;
            }
            else
            {
                idx++;
                m[idx]= vector <ll> ();
                m[idx].push_back(arr[i]);
                //cout << arr[i] << " inserted in " << idx << endl;
            }
        }
        /*for(auto itr=m.begin(); itr!=m.end(); itr++)
        {
            cout << itr->first << " -> " ;
            for(auto it=itr->second.begin(); it!=itr->second.end(); it++)
            {
                cout << *it << " ";
            }
            cout << endl;
        }*/
        ll sum=0;
        for(auto itr=m.begin(); itr!=m.end(); itr++)
        {
            auto it = itr->second.begin();
            ll mini = *it;
            ll maxi = *it;
            for(it=itr->second.begin(); it!=itr->second.end(); it++)
            {
                if(*it > maxi)
                    maxi=*it;
                if(*it < mini)
                    mini=*it;
            }
            sum+=maxi;
        }
        cout << sum << endl;
    }
	return 0;
}
