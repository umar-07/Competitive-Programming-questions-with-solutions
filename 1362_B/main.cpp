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
        ll arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        sort(arr, arr+n);
        pair<int, int> h[1025];
        for(int i=0; i<1025; i++)
        {
            h[i].first=0;
            h[i].second=0;
        }
        for(int i=0; i<n; i++)
        {
            h[arr[i]].second=1;
        }
        int flag=0;
        int num=-1;
        //cout << "11111111" << endl;
        for(int i=1; i<1025; i++)
        {
            //debug(i);
            for(int j=0; j<1025; j++)
                h[j].first=0;
            for(int j=0; j<n; j++)
            {
                int k = i^arr[j];
                //if(i==1)
                //{
                //    debug(k)
                //    cout << endl;
                //}
                if(k>1024)
                {
                    break;
                }
                (h[k].first)++;
            }
            int pass=0;
            for(int j=0; j<1025; j++)
            {
                if(h[j].second==1)
                {
                    if(h[j].first!=1)
                    {
                        pass=1;
                        break;
                    }
                }
            }
            if(pass==0)
            {
                flag=1;
                num=i;
                break;
            }
        }
        if(flag)
            cout << num << endl;
        else
            cout << "-1" << endl;
    }
	return 0;
}
