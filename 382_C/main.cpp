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
    ll arr[n];
    for(int i=0; i<n;  i++)
        cin >> arr[i];
    sort(arr, arr+n);
    if(n==1)
        cout << "-1" << endl;
    else if(n==2)
    {
        int sum = arr[0]+arr[1];
        int diff = arr[1]-arr[0];
        if(diff==0)
        {
            cout << "1" << endl;
            cout << arr[0] << endl;
            return 0;
        }
        if(sum%2==0)
        {
            cout << "3" << endl;
            cout << arr[0]-diff << " " << sum/2 << " " << arr[1]+diff << endl;
        }
        else
        {
            cout << "2" << endl;
            cout << arr[0]-diff <<  " " << arr[1]+diff << endl;
        }
    }
    else
    {
        set <ll> s;
        for(int i=1; i<n; i++)
        {
            s.insert(arr[i]-arr[i-1]);
        }
        if(s.size()==1)
        {
            auto itr = s.begin();
            if(*itr==0)
            {
                cout << "1" << endl;
                cout << arr[0] << endl;
            }
            else
            {
                int k = *itr;
                cout << "2" << endl;
                cout << arr[0]-k << " " << arr[n-1]+k << endl;
            }
        }
        else if(s.size()==2)
        {
            int flag=0;
            map <ll, ll> m;
            for(int i=1; i<n;  i++)
            {
                int k = arr[i]-arr[i-1];
                m[k]++;
            }
            for(auto itr=m.begin(); itr!=m.end(); itr++)
            {
                if(itr->second>1)
                    flag++;
            }
            if(flag>1)
            {
                cout << "0" << endl;
                return 0;
            }
            auto itr = s.begin();
            int k;
            for(int i=1; i<n; i++)
            {
                if(arr[i]-arr[i-1]!=*itr)
                {
                  k = arr[i-1]+ *itr;
                  //debug(k);
                  //debug(arr[i]);
                  //debug(arr[i-1]);
                  //cout << endl;
                  break;
                }
            }
            vector <ll> v;
            for(int i=0; i<n; i++)
                v.push_back(arr[i]);
            v.push_back(k);
            sort(v.begin(), v.end());
            int post=0;
            int diff=v[1]-v[0];
            for(int i=1; i<n+1; i++)
            {
                if(v[i]-v[i-1]!=diff)
                {
                    post=1;
                    break;
                }
            }
            if(post==1)
            {
                cout << "0" << endl;
                return 0;
            }
            cout << "1" << endl;
            cout << k << endl;
        }
        else
        {
            cout << "0" << endl;
            return 0;
        }
    }
	return 0;
}
