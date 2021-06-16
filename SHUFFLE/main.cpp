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
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        if(k==1)
        {
            cout << "yes" << endl;
            continue;
        }
        vector <ll> v[k];
        for(int i=0; i<n; i++)
        {
            v[i%k].push_back(arr[i]);
        }
        for(int i=0; i<k; i++)
        {
            sort(v[i].begin(), v[i].end());
        }
        //cout << "loop";
        int flag=0;
        ll j=0;
        int f=0;
        for(int i=0; i<k; i++)
        {
            for(int j=0; j<v[i].size(); j++)
                cout << v[i][j] << " ";
            cout << endl;
        }
        vector <ll> res;
        while(1)
        {
            cout << endl;
            cout << "j: " << j << endl;
            if(f==1 || flag==1)
                break;
            for(int i=0; i<k-1; i++)
            {
                cout << "elemenets: " ;
                cout << v[i][j] << " " << v[i+1][j] << endl;
                if(j>=v[i].size()-1 || j>=v[i+1].size()-1)
                {
                    f=1;
                    break;
                }
                if(v[i][j]>v[i+1][j])
                {
                    flag=1;
                    break;
                }
                res.push_back(v[i][j]);
                if(i==k-2)
                    res.push_back(v[i+1][j]);
            }
            j++;
        }
        cout << endl << endl;
        if(flag)
            cout << "no" << endl;
        else
        {
            ll post=0;
            for(int i=0; i<res.size()-1; i++)
            {
                if(res[i]>res[i+1])
                {
                    post=1;
                    break;
                }

            }
            for(int i=0; i<res.size(); i++)
                cout << res[i] << " ";
            cout << endl;
            if(post)
                cout << "no" << endl;
            else
                cout << "yes" << endl;
        }
    }
	return 0;
}
