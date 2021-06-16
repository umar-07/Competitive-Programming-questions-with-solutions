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
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        set <ll> b;
        for(int i=0; i<n; i++)
        {
            b.insert(arr[i]);
        }
        if(b.size()>k)
            cout << "-1" << endl;
        else if(b.size()==k)
        {
            auto itr=b.begin();
            int c=2;
            for(int i=0; i<n; i++)
            {
                itr=b.begin();
                if(arr[i]==*itr)
                {
                    for(int j=i; j<n; j++)
                    {
                        if(arr[j]!=(*itr))
                            break;
                        itr++;
                    }
                    c++;
                }
            }
            cout << c*b.size() << endl;
            for(int i=0; i<c; i++)
            {
                for(auto it=b.begin(); it!=b.end(); it++)
                    cout << *it << " ";
            }
            cout << endl;
        }
        else
        {
            auto it = b.end();
            it--;
            ll p = 1;
            while(b.size()!=k)
            {
                if(b.find(p)==b.end())
                {
                    b.insert(p);
                    p++;
                }
                else
                    p++;
            }
            auto itr=b.begin();
            int c=2;
            for(int i=0; i<n; i++)
            {
                itr=b.begin();
                if(arr[i]==*itr)
                {
                    for(int j=i; j<n; j++)
                    {
                        if(arr[j]!=(*itr))
                            break;
                        itr++;
                    }
                }
                c++;
            }
            cout << c*b.size() << endl;
            for(int i=0; i<c; i++)
            {
                for(auto it=b.begin(); it!=b.end(); it++)
                    cout << *it << " ";

            }
            cout << endl;
        }
    }
	return 0;
}
