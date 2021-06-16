#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        string s, r;
        cin >> s >> r;
        if(s.size()==1)
        {
            if(s[0]==r[0])
                cout << "0" << endl;
            else
                cout << "1" << endl;
        }
        else
        {
            ll n = s.size();
        ll arr[n]={0};
        for(int i=0; i<n; i++)
        {
            if(s[i]==r[i])
                arr[i]=0;
            else
                arr[i]=1;
        }
        ll pre[n]={0};
        pre[0]=arr[0];
        for(int i=1; i<n; i++)
        {
            if(arr[i]==0)
                continue;
            else
            {
                pre[i]=pre[i-1]+arr[i];
            }
        }
        /*for(int i=0; i<n; i++)
            cout << pre[i] << " ";
        cout << endl;*/
        vector <pair<ll, ll> > v;
        for(int i=1; i<n; i++)
        {
            if(i==n-1 && pre[i]!=0)
            {
                v.push_back({pre[i], i-pre[i]+1});
                continue;
            }
            if(pre[i]==0)
            {
                if(pre[i-1]!=0)
                    v.push_back({pre[i-1], (i-1)-pre[i-1]+1});
            }
        }
        if(v.size()==0) // maybe consider size 1 too
        {
            cout << "0" << endl;
        }
        else
        {

        /*for(int i=0; i<v.size(); i++)
            cout << v[i].first << "," << v[i].second << "  ";
        cout << endl;*/
        vector <pair<ll, ll> > res;
        res.push_back({v[0].first, v[0].second});
        //cout << "operations" << endl;
        for(int i=1; i<v.size(); i++)
        {
            ll last=res.size()-1;
            ll same = v[i].first + v[i].second - res[last].second;
            ll diff = (res[last].first + v[i].first)*2;
            //cout << "i, same, diff " << i << " " << same << " " << diff << endl;
            if(same>diff)
            {
                //cout << "inserting new pair" << endl;
                res.push_back({v[i].first, v[i].second});
                continue;
            }
            else
            {
                //cout << "expanding set" << endl;
                res[last].first=v[i].first + v[i].second - res[last].second;
                res[last].second=res[last].second;
                continue;
            }
        }
        /*cout << "res" << endl;
        for(int i=0; i<res.size(); i++)
            cout << res[i].first << "," << res[i].second << "  ";
        cout << endl;*/
        ll sum=0;
        for(int i=0; i<res.size(); i++)
        {
            sum+=res[i].first;
        }
        ll num=res.size();
        ll final_res = sum*num;
        cout <<  final_res << endl;
        }
        }
    }
	return 0;
}
